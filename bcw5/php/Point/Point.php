<?php
    class Point {
        private $x;
        private $y;

        public function Point($x=0, $y=0) {
            $this->x = $x;
            $this->y = $y;
        }

        public function getX() {
            return $this->x;
        }

        public function getY() {
            return $this->y;
        }

        public function setX($x) {
            $this->x = $x;
        }

        public function setY($y) {
            $this->y = $y;
        }

        public function distance($other) {
            return hypot($this->x-$other->x, $this->y-$other->y);
        }

        public function __toString() {
            return sprintf("(%s, %s)", $this->x, $this->y);
        }
    }

    function isEqual($x, $y) {
        if ( $x == $y ) {
            echo $x . " is equal to " . $y . PHP_EOL;
        }
    }

    function isNotEqual($x, $y) {
        if ( $x != $y ) {
            echo $x . " isn`t equal " . $y . PHP_EOL;
        }
    }

    $a = new Point(0, 5);
    $b = new Point(3, 19);
    $c = new Point(3, 78);
    $d = $a;
    $e = clone $a;

    echo "a: " . $a . PHP_EOL;
    echo "b: " . $b . PHP_EOL;
    echo "c: " . $c . PHP_EOL;

    isEqual($a, $b);
    isEqual($b, $c);

    isNotEqual($a, $b);
    isNotEqual($a, $d);

    echo $a->distance($b) . PHP_EOL;
    echo $b->distance($c) . PHP_EOL;
?>