<?php
	include 'Pen.php';

	$pen   = new Pen();
	$paper = new Paper();

	$message = "We are all one!";

	try {
		$pen->write($paper, $message);	
	} catch (Exception $e) {
	 	echo "There is no more ink in this pen". PHP_EOL;
	}
	$paper->output();
	$pen->output();
	$paper->show();
?>