<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" 
	"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<head>
	<meta http-equiv="Content-Type"
		content="text/html;
		charset-utf-8" />
	<title>Basic PHP Page Using Echo</title>
</head>
<body>
	<!-- Script 1.4 - first.php -->
	<p>This is standard HTML.</p>
	<?php
	
	# Script 1.4
	# Created 8/11/17
	# Created by Allie Mages
	# This script does nothing much.
	# From chapter one of "PHP and MySQL for Dynamic Web Sites" by Larry Ullman
	echo "This is a line of text.\n"; //line break ends up being only a space
										//line break needs double quotation marks
	echo 'This is in the same line.'; //to show the line break's (lack of) effect
	echo '<p>This goes over <br /> two lines of text.</p>'; //using html tags now
	echo '<p>Now I\'m done.</p>'; //don't forget the escape character!
	
	?>
</body>
</html>