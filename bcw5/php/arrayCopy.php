<?php
	function arrayCopy($destination, $source) {
		global $destination;
	    for ( $i = 0; $i < sizeof($source); $i++ ) {
	        $destination[$i] = $source[$i];
	    }
	}

    $source = array(9, 8, 10, 72, 48);
    $destination = array();
    
    arrayCopy($destination, $source);
    print_r($source);
    print_r($destination);
?>