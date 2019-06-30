<?php
	include 'Mohican.php';
	$obj = new Mohican("Chuchu");
	$obj2 = new Mohican("HrenHren");
	$obj3 = new Mohican("Mohican");

	// print("Original object:\n");
	// print_r($obj);

	// print("Cloned object:\n");
	// print_r($obj2);

	// print("Cloned object:\n");
	// print_r($obj3);

	print_r(Mohican::$lastMohican);
?>