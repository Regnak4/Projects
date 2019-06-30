<?php
	$size = rtrim(fgets(STDIN));
	$counter;

	$counter = $size * $size - $size + 1;

	for ( $i = 0; $i < $size; $i++ ) {
        for ( $j = 1; $j < $size; $j++ ) {
            echo $counter . " ";
            $counter += 1;
        }
        echo $counter . PHP_EOL;
        $counter -= 2 * $size - 1;
    }
?>