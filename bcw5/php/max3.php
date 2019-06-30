<?php
	$x =  fgets(STDIN); 
	$y =  fgets(STDIN); 
	$z =  fgets(STDIN);

	if ( $x > $y && $x > $z ) {
		echo $x . PHP_EOL;
	} else if ( $y > $z ) {
		echo $y . PHP_EOL;
	} else {
		echo $z . PHP_EOL;
	}
?>