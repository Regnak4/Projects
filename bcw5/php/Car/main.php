<?php
	include 'Car.php';

	$car = new Car(80, 1, new Point(1, 5), "Zhigul");

	$car->output();

	try {
		$car->drive(new Point(70, 80));	
	} catch (Exception $e) {
		echo PHP_EOL . "Fuel tank in empty!! Refill it immediately!!!" . PHP_EOL;
	}

	$car->output();

	try {
		$car->refill(90);	
	} catch (Exception $e) {
		echo PHP_EOL . "Fuel tank overfilled!! Stop it!!!" . PHP_EOL;
	}

	$car->output();
?>