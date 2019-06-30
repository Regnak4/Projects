<?php
	function gcd($a, $b) {
	    for ( $remaider = 1; $remaider != 0; $a = $b, $b = $remaider ) {
	        $remaider = $a % $b;
	    }
	    return $a;
	}

    $a;
    $b;
    $c;
    $in  = fopen("task.in", "r");
    $out = fopen("task.out", "w");

    $a = fgets($in, 3);
    $b = fgets($in, 8);

    $c = $a / gcd($a, $b) * $b;

    fwrite($out, $c);

    fclose($in);
    fclose($out);
?>