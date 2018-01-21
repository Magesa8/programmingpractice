//Example 9-12, p.323, the JHTTP web server. 
//Goes with the RequestProcessor class.

import java.io.*;
import java.net.*;
import java.util.concurrent.*;
import java.util.logging.*;

public class JHTTP {

	private static final Logger logger = 
			Logger.getLogger(JHTTP.class.getCanonicalName());
	private static final int NUM_THREADS = 50;
	private static final String INDEX_FILE = "index.html";

	private final File rootDirectory;
	private final int port;

	public JHTTP(File rootDirectory, int port) throws IOException {
		if (!rootDirectory.isDirectory()) {
			throw new IOException
			(rootDirectory + " does not exist as a directory");
		}//if
		this.rootDirectory = rootDirectory;
		this.port = port;
	}//constructor

	public void start() throws IOException {
		ExecutorService pool = Executors.newFixedThreadPool(NUM_THREADS);
		try (ServerSocket server = new ServerSocket(port)) {

			logger.info("Accepting connections on port " 
					+ server.getLocalPort());
			logger.info("Document Root: " + rootDirectory);

			while (true) { //infinite loop
				try {
					Socket request = server.accept();
					Runnable r = new RequestProcessor
							(rootDirectory, INDEX_FILE, request);
					pool.submit(r);
				} catch (IOException ex) {
					logger.log(Level.WARNING, 
							"Error accepting connection", ex);
				}//catch IOException
			}//infinite while loop
		}//outer try loop
	}//start()

	public static void main(String args[]) {

		//get the Document root
		File docroot;
		try {
			docroot = new File(args[0]);
		} catch (ArrayIndexOutOfBoundsException ex) {
			System.out.println("Usage: java JHTTP docroot port");
			return;
		} //catch array index out of bounds

		//set the port to listen on
		int port;
		try {
			port = Integer.parseInt(args[1]);
			if (port < 0 || port > 65535) port = 80;
		} catch (RuntimeException ex) {
			port = 80;
		} //catch RuntimeException

		try {
			JHTTP webserver = new JHTTP(docroot, port);
			webserver.start();
		} catch (IOException ex) {
			logger.log(Level.SEVERE, "Server could not start", ex);
		} //catch IOException

	}//main

}//JHTTP class