<?php
	$number = fgets(STDIN);

	if ( $number % 2 == 0 && $number != 0 ) {
		$number -= 1;
	}

	for ( $i = 1; $i < $number; $i += 2 ) {
		echo $i . PHP_EOL;
	}
	echo $number . PHP_EOL;
?>