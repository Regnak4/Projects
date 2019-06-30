<?php
	$a = fgets(STDIN); 
	$b = fgets(STDIN); 
	$c = fgets(STDIN); 
	$x = fgets(STDIN);
	$max;

	if ( $a > $b ) {
		$max = $a;
	} else {
		$max = $b;
	}

	if ( $max < $c ) {
		$max = $c;
	}

	if ( $max < $x ) {
		$max = $x;
	}

	echo $max . PHP_EOL;
?>