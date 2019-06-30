<?php
	$size = rtrim(fgets(STDIN));
	$value = 0;

	for ( $row = 0; $row < $size; $row++ ) {
        for ( $col = 1; $col < $size; $col++ ) {
            $value += 1;
            echo $value . " ";
        }
        $value += 1;
        echo $value . PHP_EOL;
    }
?>