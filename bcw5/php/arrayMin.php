<?php
	function arrayMin($array) {
		$size = sizeof($array);
	    $min = $array[0];
	    
	    for ( $size -= 1; 0 < $size; $size-- ) {
	        if ( $min > $array[$size] ) {
	            $min = $array[$size];
	        }
	    }
    	return $min;
	}

    $array = array(10, 99, 3, 22, 101, 6, 7, 8, -91, 5);
    echo arrayMin($array);
?>