<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" 
	"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhml" xml:lang="en" lang="en">
<head>
	<meta http-equiv="Content-Type"
		content="text/html;
		charset-utf-8" />
	<title>Strings</title>
</head>
<body>
	<!-- Script 1.6 and 1.7 - strings.php -->

	<?php
	
	# Script 1.6 and 1.7, strings and concatenating strings
	# Created 8/11/17
	# Created by Allie Mages
	# Create some string variables, and then print them with 'echo'.
	# From chapter one of "PHP and MySQL for Dynamic Web Sites" by Larry Ullman
	
	//Create the variables:
	$first_name = 'Anthony';
	$last_name = "Marra";
	$author = $first_name . ' ' . $last_name;
	$book = 'The Tsar of Love and Techno';
	
	//Print the values:
	echo "<p>The book <em>$book</em> was written by $author.</p>";
	
	?>
</body>
</html>