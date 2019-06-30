<?php
	function arrayPrint($out, $array, $size) {
	    global $array;
	    global $size;
	    $last = $size - 1;
    
	    for ( $i = 0; $i < $last; $i++ ) {
	        fwrite($out, $array[$i]);
	        //echo $array[$i] . " ";
	        fwrite($out, " ");
	    }
	    fwrite($out, $array[$last]);
	    //echo $array[$last] . PHP_EOL;
	}

	$file = "task.out";
	$out = fopen($file, "w");
	$array = array();
	$size = fgets(STDIN);

	for ( $i = 0; $i < $size; $i++ ) {
		$array[$i] = $i;
	}

	arrayPrint($out, $array, $size);
	fclose($out);
	//print_r($array);
?>