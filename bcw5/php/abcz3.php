<?php
	$x = fgets(STDIN);
	$y = fgets(STDIN);
	$z = fgets(STDIN);

    if ( $x + $y > $z ) {
        printf("alpha\n");
    } else if ( $x < $y - $z ) {
        printf("bravo\n");
    } else if ( $y % $z == 0 ) {
        printf("charlie\n");
    } else {
        printf("zulu\n");
    }
?>