<?php
	include 'Count.php';
	$obj = new Count();
	$obj2 = clone $obj;
	$obj3 = clone $obj;

	print("Original object:\n");
	print_r($obj);

	print("Cloned object:\n");
	print_r($obj2);

	print("Cloned object:\n");
	print_r($obj3);
?>