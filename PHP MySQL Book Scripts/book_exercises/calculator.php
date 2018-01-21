<?php 

# Script 3.6 - calculator.php
# Created by Allie Mages
# Created 8/17/17
# Both displays a simple form and handles the form data
# Specifically a calculator of the gas cost for a trip
# Script 3.5 is the basic calculator.php, Script 3.6 makes it "sticky"
# A sticky html form is just a regular html form that remembers what you entered into it

$page_title = 'Trip Cost Calculator';
include ("includes/header.html");

//Check for form submission:
if ($_SERVER['REQUEST_METHOD'] == 'POST') { //if form was submitted. 
											//if it wasn't, will be a GET request instead

	//Minimal form validation
	if (isset($_POST['distance'], $_POST['gallon_price'], $_POST['efficiency']) &&
	is_numeric($_POST['distance']) && is_numeric($_POST['gallon_price']) &&
	is_numeric($_POST['efficiency']) ) {
	
		//Calculate the results
		$gallons = $_POST['distance'] / $_POST['efficiency'];
		$dollars = $gallons * $_POST['gallon_price'];
		$hours = $_POST['distance']/65;
		
		//Print the results
		echo '<h1>Total Estimated Cost</h1>
			<p>The total cost of driving ' . $_POST['distance'] . ' miles, averaging ' .
			$_POST['efficiency'] . ' miles per gallon, and paying an average of $' .
			$_POST['gallon_price'] . ' per gallon, is $' . number_format($dollars, 2) . 
			'. If you drive at an average of 65 miles per hour, the trip will take
			approximately ' . number_format($hours, 2) . ' hours.</p>';
	
	} else { //if invalid submitted values
	
		echo '<h1>Error!</h1>
			<p class="error">Please enter a valid distance, price per gallon, and 
			fuel efficiency.</p>';
	
	}//end validation if/else

}//End of main submission IF.

//Leave the PHP section and create the HTML form:
?>

<h1>Trip Cost Calculator</h1>
<form action="calculator.php" method="post"> <!-- Note form returns to this file-->

	<p>Distance (in miles): <input type="text" name="distance" value=
			"<?php if (isset($_POST['distance'])) echo $_POST['distance']; ?>"/></p>
			<!--if the distance already set, display that in the form-->
			
	<p>Ave. Price Per Gallon: <span class="input">
		<input type="radio" name="gallon_price" value="2.50" 
			<?php if (isset($_POST['gallon_price']) && ($_POST['gallon_price'] == '2.50'))
				echo 'checked="checked"'; ?> /> 2.50
		<input type="radio" name="gallon_price" value="3.00" 
			<?php if (isset($_POST['gallon_price']) && ($_POST['gallon_price'] == '3.00'))
				echo 'checked="checked"'; ?> /> 3.00
		<input type="radio" name="gallon_price" value="3.50" 
			<?php if (isset($_POST['gallon_price']) && ($_POST['gallon_price'] == '3.50'))
				echo 'checked="checked"'; ?> /> 3.50
		<input type="radio" name="gallon_price" value="4.00" 
			<?php if (isset($_POST['gallon_price']) && ($_POST['gallon_price'] == '4.00'))
				echo 'checked="checked"'; ?> /> 4.00
	</span></p>
	
	<p>Fuel Efficiency: <select name="efficiency">
		<option value="10"
			<?php if (isset($_POST['efficiency']) && ($_POST['efficiency'] == '10'))
			echo ' selected="selected"'; ?>>Terrible (~10)</option>
		<option value="20"
			<?php if (isset($_POST['efficiency']) && ($_POST['efficiency'] == '20'))
			echo ' selected="selected"'; ?>>Decent (~20)</option>
		<option value="30"
			<?php if (isset($_POST['efficiency']) && ($_POST['efficiency'] == '30'))
			echo ' selected="selected"'; ?>>Very Good (~30)</option>
		<option value="50"
			<?php if (isset($_POST['efficiency']) && ($_POST['efficiency'] == '50'))
			echo ' selected="selected"'; ?>>Outstanding (~50)</option>
	</select></p>
	
	<p><input type="submit" name="submit" value="Calculate!" /></p>
</form>

<?php include ('includes/footer.html'); ?>