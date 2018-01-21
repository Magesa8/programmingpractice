<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" 
	"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhml" xml:lang="en" lang="en">
<head>
	<meta http-equiv="Content-Type"
		content="text/html;
		charset-utf-8" />
	<title>Numbers</title>
</head>
<body>
	<!-- Script 1.8 - numbers.php -->

	<?php
	
	# Script 1.8, numbers
	# Created 8/11/17
	# Created by Allie Mages
	# Create some number variables, do calculations, and print the calculations.
	# From chapter one of "PHP and MySQL for Dynamic Web Sites" by Larry Ullman
	
	//Set the variables:
	$quantity = 30; //Buying 30 skiving snackboxes.
	$price = 5.99; //For 5.99 galleons each
	$taxrate = .05; //5% sales tax
	
	//Calculate the total:
	$total = $quantity * $price;
	$total += ($total * $taxrate);
	
	//Format the total:
	$total = number_format ($total, 2);
	
	//Print the results:
	echo '<p>You are purchasing <b>' . $quantity . '</b> skiving snackbox(es) 
	at a cost of <b>' . $price . '</b> each. With tax, the total comes to 
	<b>$' . $total . '</b>.</p>';
	
	?>
</body>
</html>