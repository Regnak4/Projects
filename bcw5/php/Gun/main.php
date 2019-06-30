<?php
	include 'Gun.php';

	$pistol = new Gun("Mauzer", 15);

	$pistol->output();
	try {
		$pistol->shoot();
	} catch (Exception $e) {
		echo "Prepare the gun you idiot!!" . PHP_EOL;
		$pistol->prepare();
	}
	$pistol->output();

	for ($i = 0; $i < $pistol->getCapacity(); $i++) {
		try {
			$pistol->shoot();
		} catch (Exception $e) {
			echo "Reload the gun you piece of genious before shooting!!" . PHP_EOL;
		}
	}
	$pistol->output();
?>