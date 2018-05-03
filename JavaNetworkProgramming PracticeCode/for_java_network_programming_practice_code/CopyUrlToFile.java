package for_java_network_programming_practice_code;

//Example 7-1, Download a web page with a URLConnection, p.191
//modified to print to a file instead of the console

import java.io.*;
import java.net.*;

public class CopyUrlToFile {

	public static void main (String[] args) {
		if (args.length > 0) { 
			try { //catch IOException
				//Open the URLConnection for reading
				URL u = new URL(args[0]); //command line argument
				URLConnection uc = u.openConnection();
				try (InputStream raw = uc.getInputStream()) { //auto-close, try-with-resources
					
					InputStream buffer = new BufferedInputStream(raw);
					//chain the InputStream to a Reader
					Reader reader = new InputStreamReader(buffer);
					
					String filename = "";
					boolean startIncludingInFilename = false;
					for (int i = 0; i < args[0].length(); i++) {
						if (startIncludingInFilename) {
							filename += args[0].charAt(i);
						} else if (args[0].charAt(i) == ':') { //if we've hit the ':' in, e.g., "http:"
							i += 2; //skip the double slash that comes after the colon
							startIncludingInFilename = true;
						}//else-if
					}//for
					filename += ".txt";
					new File(filename); //does nothing if file already exists. 
							//Creates to working directory, works because this is a command line pgrm
					Writer writer = new BufferedWriter(new FileWriter(filename));
					
					int c;
					while ((c = reader.read()) != -1) {
						writer.write(c);
					}//while
					writer.flush();
					writer.close();
					System.out.println("Url successfully copied to " + filename);
					
				} catch (MalformedURLException ex) {
					System.err.println(args[0] + " is not a parseable URL.");
				} //MalformedURLException try-catch
			} catch (IOException ex) {
				System.err.println(ex);
			} //IOException try-catch
		}//if
	}//main
	
}//CopyUrlToFile class (called SourceViewer2 in the book)
