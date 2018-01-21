<!DOCTYPE html public "-//W3C//DTD XHTML 1.0 Transitional//EN"
"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<title>Multidimensional Arrays</title>
</head>
<body>

<h1>Some North American Sates, Provinces, and Territories</h1>

<?php

	# Script 2.7, multi.php
	# Created 8/13/17
	# Created by Allie Mages
	# List some countries and an abbreviated list of its states/provinces/territories
	# The point is to practice using multidimensional arrays
	# From chapter two of "PHP and MySQL for Dynamic Web Sites" by Larry Ullman
	
	//Create array for mexico
	$mexico = array(
		'YU' => 'Yucatan',
		'BC' => 'Baja California',
		'OA' => 'Oaxaca'
	);
	
	//Create array for the US
	$us = array(
		'CA' => 'California',
		'OR' => 'Oregon',
		'NY' => 'New York',
		'WA' => 'Washington',
		'MA' => 'Massachusetts',
		'IL' => 'Illinois'
	);
	
	//Create array for Canada
	$canada = array(
		'QC' => 'Quebec',
		'AB' => 'Alberta',
		'NT' => 'Northwest Territories',
		'YT' => 'Yukon',
		'PE' => 'Prince Edward Island'
	);
	
	//Combine the arrays into one North America meta-array
	$n_america = array(
		'Mexico' => $mexico,
		'United States' => $us,
		'Canada' => $canada
	); //starting to look a bit SQL like already
	
	//Loop through the countries to print them:
	foreach ($n_america as $country => $list) {
		
		//Print a heading
		echo "<h2>$country</h2><ul>"; //<ul> is an html unordered list tag
		
		//Print each state, province, or territory:
		foreach ($list as $key => $value) {
			echo "<li>$key - $value</li>\n"; //<li> defines a list item (within the ul)
		}
		
		//close the list:
		echo '</ul>';
	
	}//end of the main foreach
	
?>

</body>
</html>