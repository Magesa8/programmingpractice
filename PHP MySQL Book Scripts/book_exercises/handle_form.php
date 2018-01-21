<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" 
	"http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">

<html xmlns="http://www.w3.org/1999/xhml" xml:lang="en" lang="en">

<head>
	<meta http-equiv="Content-Type"
	content="text/html; charset-utf-8" />
	<title>Form Feedback</title>
</head>

<body>
<?php # Script 2.5 - handle_form.php #4

	# Script 2.5, handle_form.php
	# Created 8/13/17
	# Created by Allie Mages
	# Use the $_POST array instead of the $_REQUEST array
	# From chapter two of "PHP and MySQL for Dynamic Web Sites" by Larry Ullman

	//Print the submitted information
	if ( !empty($_POST['name']) && !empty($_POST['comments']) && !empty($_POST['email']) ){
		echo "<p>Thank you, <b>{$_POST['name']}</b>, for the following comments:<br />
			<tt>{$_POST['comments']}</tt></p>
			<p>We will reply to you at <i>{$_POST['email']}</i></p>\n";
	} else { //missing form value
		echo '<p>Please go back and fill in the form again.</p>';
	}

?>
</body>
</html>

<!-- MORE COMPLEX VERSION OF CODE (2.4) THAT VALIDATES THAT FORM DATA EXISTS

<html xmlns="http://www.w3.org/1999/xhml" xml:lang="en" lang="en">

<head>
	<meta http-equiv="Content-Type"
		content="text/html;
		charset-utf-8" />
	<title>Validating Form Handler</title>
	<style type="text/css" title="text/css" media="all">
	.error {
		font-weight: bold;
		color: #C00;
	}
	</style>
</head>

<body>
<!~~ Script 2.4, handle_form.php~~>

<?php

	# Script 2.4, handle_form.php
	# Created 8/11/17
	# Created by Allie Mages
	# Validate the data from form.html before displaying a message about it
	# From chapter two of "PHP and MySQL for Dynamic Web Sites" by Larry Ullman

	//Validate name
	if (!empty($_REQUEST['name'])) {
		$name = $_REQUEST['name'];
	} else {
		$name = NULL;
		echo '<p class="error">You forgot to enter your name!</p>';
	}
	
	//Validate email
	if (!empty($_REQUEST['email'])) {
		$email = $_REQUEST['email'];
	} else {
		$email = NULL;
		echo '<p class="error">You forgot to enter your email!</p>';
	}
	
	//Validate the comments:
	if (!empty($_REQUEST['comments'])) {
		$comments = $_REQUEST['comments'];
	} else {
		$comments = NULL;
		echo '<p class="error">You forgot to enter any comments!</p>';
	}
	
	//Validate the gender:
	if (isset($_REQUEST['gender'])) {
		$gender = $_REQUEST['gender'];
		switch ($gender) { //if the variable equals value given after each case
			case 'M':
				$greeting = "<p><b>Good day, sir!</b></p>";
				break;
			case 'F':
				$greeting = "<p><b>Good day, madam!</b></p>";
				break;
			default: //if $gender doesn't equal either of the above cases
				$greeting = NULL;
				echo '<p class="error"><b>It appears you reject the gender binary.
				Good on you! But you have to redo this backward form.</b></p>';
				break;
		}
	} else { //$_REQUEST['gender'] is not set
		$gender = NULL;
		$greeting = NULL;
		echo '<p class="error"><b>Did you forget to enter your gender, or do you just
		reject the gender binary? We\'ll assume the latter. Good on you!
		(But you have to fill in the form again, sorry. We suck.)</b></p>';
	}
	
	//If everything is okay, print the message.
	if ($name && $email && $comments && $gender) {
		echo "<p>Thank you, <b>$name</b>, for your comments:<br /><tt>$comments</tt></p>
		<p>We will email you at <em>$email</em>.$greeting";
	} else { //if some information is missing
		echo "<p>Please go back and fill in the form again.</p>";
	}

?>

</body>
</html>
 -->

<!-- THE SIMPLE SCRIPT 2.3 VERSION OF HANDLE FORM, WITHOUT VALIDATION:
<html xmlns="http://www.w3.org/1999/xhml" xml:lang="en" lang="en">

<head>
	<meta http-equiv="Content-Type"
		content="text/html;
		charset-utf-8" />
	<title>Form Handler</title>
</head>

<body>
	<!~~ Script 2.3 - handle_form.php ~~>

	<?php
	
	# Script 2.3, handle form
	# Created 8/11/17
	# Created by Allie Mages
	# Print out some info using the data from form.html, using basic conditional
	# From chapter two of "PHP and MySQL for Dynamic Web Sites" by Larry Ullman
	
	//Create a shorthand for the form data
	$name = $_REQUEST['name'];
	$email = $_REQUEST['email'];
	$comments = $_REQUEST['comments'];
	//Not used: $_REQUEST['age'], $_REQUEST['submit']
	
	//Validate the gender variable by checking for a value
	if (isset($_REQUEST['gender'])) {
		$gender = $_REQUEST['gender'];
	} else {
		$gender = NULL;
	}
	
	//Print a message using the submitted information
	echo "<p>Thank you, <b>$name,</b> for your comments:<br /><em>$comments</em></p>
	<p>We will email you at <em>$email</em>.</p>";
	
	//Print a message based on gender
	if ($gender == 'M') {
		echo "<p>Good day, sir!</p>";
	} elseif ($gender == 'F') {
		echo "<p>Good day, madam!</p>";
	} else {
		echo "<p>Reject the gender binary!</p>";
	}
	
	?>
	
</body>
</html> 
 -->
