<?php
	$dividend = fgets(STDIN);
	$divisor  = fgets(STDIN);
	$multiple;

	$multiple = $dividend - $dividend % $divisor;
    if ( $divisor < 0 ) {
        $divisor *= -1;
    }
    
    if ( $multiple < $dividend ) {
        $multiple += $divisor;
    }
    echo $multiple . PHP_EOL;
?>