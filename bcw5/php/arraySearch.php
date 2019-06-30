<?php
	function arraySearch($array, $needle) {
		$size = sizeof($array);
	    for ( $size -= 1; 0 <= $size; $size-- ) {
	        if ( $needle == $array[$size] ) {
	            return $size;
	        }
	    }
	    return -1;
	}

	$array = array(1, 90, 76, 78, 9, 4, 56);
	echo arraySearch($array, 56);
?>