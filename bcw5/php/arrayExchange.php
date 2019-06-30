<?php
	function arrayExchange($array) {
		global $array;
		$len = sizeof($array);
	    for ( $i = 0, $j = 1; $j < $len; $i += 2, $j += 2 ) {
	        $temp = $array[$i];
	        
	        $array[$i] = $array[$j];
	        $array[$j] = $temp;
	    }
	}
    $array = array(0, 1, 2, 3, 4, 5, 6, 7, 8, 9);
    
    arrayExchange($array);
    print_r($array);
?>