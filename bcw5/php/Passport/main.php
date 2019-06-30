<?php
	include 'Passport.php';

	$pas1 = new Passport("Stanlie", "Baldwin", 1967, 12, 21);
	print_r($pas1);
	$pas2 = new Passport("Yakov", "Cherevichenko", 1955, 3, 8);
	print_r($pas2);
	$pas3 = new Passport("Leonid", "Govorov", 1945, 8, 18);
	try {
		$pas4 = new Passport("Philip", "Petain", 1967, 33, 78);	
	} catch(Exception $e) {
		echo PHP_EOL . "Enter valid Date!!!\n" . PHP_EOL;
	}
	
	$pas3->setSerie("er");
	$pas3->setNumber(100023);
	print_r($pas3);

	try {
		$pas1->setNumber(999991);
	} catch (Exception $e) {
		echo PHP_EOL . "You can`t change number if you hadn`t changed your Passport serie!" . PHP_EOL;
	}
?>