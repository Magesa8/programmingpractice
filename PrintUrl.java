//Example 7-1, Download a web page with a URLConnection, p.191

import java.io.*;
import java.net.*;

public class PrintUrl {

	public static void main (String[] args) {
		if (args.length > 0) { 
			try { //catch IOException
				//Open the URLConnection for reading
				URL u = new URL(args[0]); //command line argument
				URLConnection uc = u.openConnection();
				try (InputStream raw = uc.getInputStream()) { //auto-close
					InputStream buffer = new BufferedInputStream(raw);
					//chain the InputStream to a Reader
					Reader reader = new InputStreamReader(buffer);
					int c;
					while ((c = reader.read()) != -1) {
						System.out.print((char) c);
					}//while
				} catch (MalformedURLException ex) {
					System.err.println(args[0] + " is not a parseable URL.");
				} //MalformedURLException try-catch
			} catch (IOException ex) {
				System.err.println(ex);
			} //IOException try-catch
		}//if
	}//main
	
}//PrintUrl class (called SourceViewer2 in the book)
