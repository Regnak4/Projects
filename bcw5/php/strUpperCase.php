<?php
	$in = fopen("task.in", "r");
	$out = fopen("task.out", "w");
    $str = fgets($in);

    $str = strtoupper($str);
    fwrite($out, $str);
    print_r($str);

    fclose($in);
    fclose($out);
?>