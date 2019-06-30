<?php
	$cap = fgets(STDIN);
	$div = fgets(STDIN);

	if ( $div < 0 ) {
		$div *= -1;
	}

	$cap -= $cap % $div;

	for ( $i = 0; $i < $cap; ) {
		echo $i . PHP_EOL;
		$i += $div;
	}
	echo $cap . PHP_EOL;
?>