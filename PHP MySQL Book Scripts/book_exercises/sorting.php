<!DOCTYPE html public "-//W3C//DTD XHTML 1.0 Transitional//EN"
"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
	<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	<title>Sorting Arrays</title>
</head>
<body>

<table border="0" cellspacing="3" cellpadding ="3" align="center">
	<tr>
		<td><h2>Rating:</h2></td>
		<td><h2>Title:</h2></td>
	</tr>

<?php # Script 2.8 - sorting.php

	# Script 2.8, sorting.php
	# Created 8/13/17
	# Created by Allie Mages
	# Sort some games by rating (according to Chris) and display them in order
	# The point is to practice sorting arrays
	# From chapter two of "PHP and MySQL for Dynamic Web Sites" by Larry Ullman

	//Create the array, in alphabetical order
	$games = array (
		'Batman Arkham Asylum' => 14,
		'Batman Arkham City' => 13,
		'Dragon Age Inquisition' => 19,
		'Dragon Age Origins' => 17,
		'Dragon Age 2' => 22,
		'Half-Life 2' => 12,
		'Jade Empire' => 8,
		'Legend of Zelda: A Link Between Worlds' => 10,
		'Legend of Zelda: A Link to the Past' => 11,
		'Legend of Zelda: Majora\'s Mask' => 7,
		'Legend of Zelda: Ocarina of Time' => 6,
		'Legend of Zelda: Twilight Princess' => 9,
		'Mass Effect' => 2,
		'Super Smash Bros Brawl' => 15,
		'Mass Effect 2' => 1,
		'Mass Effect 3' => 5,
		'Metal Gear Solid: The Twin Snakes' => 21,
		'Metal Gear 2: Solid Snake' => 20,
		'Metal Gear Solid 3: Snake Eater' => 3,
		'Metal Gear Solid 5: The Phantom Pain' => 24,
		'Pokemon Sun' => 27,
		'Portal 2' => 26,
		'Shadow of Mordor' => 4,
		'Star Wars Jedi Knight: Jedi Academy' => 25,		
		'Star Wars Knights of the Old Republic' => 18,
		'Star Wars Knights of the Old Republic II: The Sith Lords' => 23,
		'Super Mario Maker' => 16
	);
	
	//Display the games in their original order:
	echo '<tr><td colspan="2"><b>In Alphabetical Order:</b></td></tr>';
	ksort($games);
	foreach ($games as $title => $rating) {
		echo "<tr><td>$rating</td>
		<td>$title</td></tr>\n";
	}
	
	//Display the games sorted by their rank according to Chris Dinkelspiel:
	echo '<tr><td colspan="2"><b>Ordered by Chris\'s Ranking:</b></td></tr>';
	asort($games);
	foreach ($games as $title => $rating) {
		echo "<tr><td>$rating</td>
		<td>$title</td></tr>\n";
	}

?>

</table>
</body>
</html>