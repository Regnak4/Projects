<?php
	$number = fgets(STDIN);

	$number -= $number % 2;

	for ( $i = 0; $i < $number; ) {
		echo $i . PHP_EOL;
		$i += 2;
	}
	echo $number . PHP_EOL;
?>