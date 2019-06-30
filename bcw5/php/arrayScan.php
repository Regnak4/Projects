<?php 
	$file = file("task.in");
	$array = array();
	foreach ($file as $line) {
		echo $line . " ";
		$array = $line;
	}
	echo(PHP_EOL . "=============" . PHP_EOL);
	print_r($array);	  	
?>