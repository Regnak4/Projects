<?php
	$num = fgets(STDIN);

	$num -= $num % 5;
	
	for ( $i = 0; $i < $num; $i += 5 ) {
		echo $i . PHP_EOL;
	}
	echo $i . PHP_EOL;
?>