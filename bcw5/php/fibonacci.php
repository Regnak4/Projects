<?php
	function fibonacci($n) {
	    if ( $n == 0 ) {
	        return 0;
	    }
	    if ( $n == 1 || $n == -1 ) {
	        return 1;
	    }
	    if ( $n < 0 ) {
	        return fibonacci($n+2) - fibonacci($n+1);
	    }
	    return fibonacci($n-1) + fibonacci($n-2);
	}

	$number = rtrim(fgets(STDIN));

	echo fibonacci($number);
?>