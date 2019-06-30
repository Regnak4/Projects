<?php
	include 'Unit.php';

	$soldier = new Unit("Johnny", 100 , 10);
	$knight  = new Unit("Richard", 120 , 12);

	$soldier->output();
	$knight->output();

	try {
		for ($i = 0; $i < 10; $i++) {
			$knight->attack($soldier);
		}
	} catch(Exception $e) {
		echo PHP_EOL . "Unit is already dead!" . PHP_EOL;
	}

	try {
		$soldier->addHitPoints(20);
	} catch(Exception $e) {
		echo PHP_EOL . "It`s too late..." . PHP_EOL;
	}
	
	$knight->addHitPoints(20);
	$soldier->output();
	$knight->output();
?>