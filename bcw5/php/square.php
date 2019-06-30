<?php
	$size = rtrim(fgets(STDIN));

	for ( $length = 0; $length < $size; $length++ ) {
        for ( $width = 1; $width < $size; $width++ ) {
            echo $width . " ";
        }
        echo $size . PHP_EOL;
    }
?>