<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" 
	"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhml" xml:lang="en" lang="en">
<head>
	<meta http-equiv="Content-Type"
		content="text/html;
		charset-utf-8" />
	<title>Single vs Double Quotation Marks</title>
</head>
<body>
	<!-- Script 1.10 - quotes.php -->

	<?php
	
	# Script 1.10, quotes
	# Created 8/11/17
	# Created by Allie Mages
	# Modify numbers.php to demonstrate single vs double quotation marks in PHP
	# (namely content in single is treated literally, in double is interpretered)
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
	
	//Print the results using single quotation marks:
	echo '<h3>Using single quotation marks:</h3>';
	echo '<p>You are purchasing <b>' . $quantity . '</b> skiving snackbox(es) 
	at a cost of <b>$' . $price . '</b> each. With tax, the total comes to 
	<b>$' . $total . '</b>.</p>';
	
	//Print the results using double quotationg marks:
	echo '<h3>Using double quotation marks:</h3>';
	echo "<p>You are purchasing <b>$quantity</b> skiving snackbox(es) at a cost of
	<b>\$$price</b> each. With tax, the total comes to <b>\$$total</b>.</p>.";
	
	?>
</body>
</html>