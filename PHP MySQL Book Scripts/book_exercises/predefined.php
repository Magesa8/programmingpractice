<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" 
	"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhml" xml:lang="en" lang="en">
<head>
	<meta http-equiv="Content-Type"
		content="text/html;
		charset-utf-8" />
	<title>Predefined Variables</title>
</head>
<body>
	<!-- Script 1.5 - predefined.php -->

	<?php
	
	# Script 1.5, predefined variables
	# Created 8/11/17
	# Created by Allie Mages
	# This script prints the names of 3 predefined variables.
	# From chapter one of "PHP and MySQL for Dynamic Web Sites" by Larry Ullman
	
	//Create a shorthand version of the variable names:
	$file = $_SERVER['SCRIPT_FILENAME'];
	$user = $_SERVER['HTTP_USER_AGENT'];
	$server = $_SERVER['SERVER_SOFTWARE'];
	
	//Print the name of this script:
	echo "<p>You are running the file:<br /><b>$file</b>.</p><br />";
	
	//Print the user's information:
	echo "<p>This server is running:<br /><b>$server</b>.</p><br />";
	
	?>
</body>
</html>