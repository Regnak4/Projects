<?php
	$x = fgets(STDIN);
	$y = fgets(STDIN);

	if ( $x > $y ) {
        echo $x . PHP_EOL;
	} else {
        echo $y . PHP_EOL;
    }
?>