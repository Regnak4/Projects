<?php
	function arrayReverse($array) {
		global $array;
		$size = sizeof($array);
	    for ( $i = 0, $j = $size - 1; $i < $j; $i++, $j-- ) {
	        $temp = $array[$i];
	        
	        $array[$i] = $array[$j];
	        $array[$j] = $temp;
	    }
	}
    $array = array(0, 1, 2, 3, 4, 5, 6, 7, 8, 9);
    
    arrayReverse($array);
    print_r($array);
?>