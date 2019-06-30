<?php
	$a = fgets(STDIN); 
	$b = fgets(STDIN); 
	$c = fgets(STDIN); 
	$d = fgets(STDIN);
	$e = fgets(STDIN);
	$max;

	if ( $a > $b ) {
		$max = $a;
	} else {
		$max = $b;
	}

	if ( $max < $c ) {
		$max = $c;
	}

	if ( $max < $d ) {
		$max = $d;
	}

	if ( $max < $e ) {
		$max = $e;
	}

	echo $max . PHP_EOL	;
?>