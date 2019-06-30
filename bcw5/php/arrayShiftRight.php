<?php
	function arrayShiftRight($array) {
		global $array;
		$size = sizeof($array);
	    $temp = $array[$size-1];
	    
	    for ( $last = $size - 1; $last > 0; $last-- ) {
	        $array[$last] = $array[$last-1];
	    }
	    $array[0] = $temp;
	}

    $array = array(0, 1, 2, 3, 4, 5, 6, 7, 8, 9);
    
    arrayShiftRight($array);
    
    print_r($array);
?>