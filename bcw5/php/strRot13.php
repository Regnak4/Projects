<?php
	$in = fopen("task.in", "r");
	$out = fopen("task.out", "w");
    $str = fgets($in);
    print_r($str);

    $str = str_rot13($str);
    fwrite($out, $str);
    print_r("\n" . $str);

    fclose($in);
    fclose($out);
?>