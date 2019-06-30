<?php
    $a = fgets(STDIN);

    $a -= $a % 3;

    for ( $i = 0; $i < $a; ) {
        echo $i . PHP_EOL;
        $i += 3;
    }
    echo $a . PHP_EOL;
?>