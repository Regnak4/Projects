
<?php
    function arrayMax($array) {
        $size = sizeof($array);
        $max = $array[$size-1];
        
        for ( $size -= 2; 0 <= $size; $size-- ) {
            if ( $max < $array[$size] ) {
                $max = $array[$size];
            }
        }
        return $max;
    }

    $array = array(1, 2, 3, 4, 10, 6, 706, 8, 99, 5);
    
    echo arrayMax($array);
?>