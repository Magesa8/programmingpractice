<!DOCTYPE html public "-//W3C//DTD XHTML 1.0 Transitional//EN"
"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<title>Calendar</title>
</head>
<body>

<form action="calendar.php" method="post"> 
<!--Even though the page won't contian a compelte HTML form,
the form tags are still required to create the pull-down menus -->
<?php

	# Script 2.6, calendar.php
	# Created 8/13/17
	# Created by Allie Mages
	# Create arrays in order to make 3 drop-down menus
	# From chapter two of "PHP and MySQL for Dynamic Web Sites" by Larry Ullman
	
	//This script makes three pull-down menus
	//for an HTML form: months, days, years.
	
	//Make the months array:
	//default key would start at zero, so we specify the first key as 1,
	//which then causes the rest to be automatically incremented by 1 over the previous.
	$months = array(1 => 'January', 'February', 'March', 'April', 'May', 
	'June', 'July', 'August', 'September', 'October', 'November', 'December');
	
	/*
	//Make the days and years arrays using the range function
	$days = range(1, 31);
	$years = range(2017, 2027);
	*/
	
	//Make the months pull-down menu:
	# Each execution of the loop will create a line of code like:
	# <option value="1">January</option>
	# which is the syntax of an item in an html drop-down menu.
	# Remember that the php isn't directly talking to the brwoser -- it's just
	# printing html script that is then interpreted as regular html by the browser.
	echo '<select name="month">';
	foreach($months as $key => $value) {
		echo "<option value=\"$key\">$value</option>\n";
	}
	echo '</select>';
	
	/*
	//Make the days pull-down menu using days and years arrays:
	echo '<select day="day">';
	foreach($days as $value) {
		echo "<option value=\"$value\">$value</option>\n";
	}
	echo '</select>';
	
	//Make the years pull-down menu:
	echo '<select year="year">';
	foreach($years as $value) {
		echo "<option value=\"$value\">$value</option>\n";
	}
	echo '</select>';
	*/
	
	//Make the days and years pull-down menu with for loops and no actual arrays:
	//As Script 2.9, p.70-71
	echo '<select name="day">';
	for ($day = 1; $day <= 31; $day++) {
		echo "<option value=\"$day\">$day</option>\n";
	}
	echo '</select>';
	
	echo '<select name="year">';
	for ($year = 2017; $year <= 2027; $year++) {
		echo "<option value=\"$year\">$year</option>\n";
	}
	echo '</select>';

?>
</form>

</body>
</html>