<?php
	$x = fgets(STDIN);
	$y = fgets(STDIN);

	if ( $x > $y && $y > 0 ) {
        printf("alpha\n");
    } else if ( $x < 0 && $y == 0 ) {
        printf("bravo\n");
    } else if ( $x == 0 || $y == 0 ) {
        printf("charlie\n");
    } else {
        printf("zulu\n");
    }
?>