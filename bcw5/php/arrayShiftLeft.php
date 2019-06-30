<?php
	function arrayShiftLeft($array) {
		global $array;
		$size = sizeof($array);
	    $temp = $array[0];
	    
	    for ( $i = 1; $i < $size; $i++ ) {
	        $array[$i-1] = $array[$i];
	    }
	    $array[$size-1] = $temp;
	}

    $array = array(0, 1, 2, 3, 4, 5, 6, 7, 8, 9);
    
    arrayShiftLeft($array);
    
    print_r($array);
?>