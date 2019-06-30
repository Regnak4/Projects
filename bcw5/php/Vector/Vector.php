<?php    
    class Vector {
        private $x;
        private $y;

        public function Vector($x=0, $y=0) {
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

        public function len($other) {
            return hypot($this->x-$other->x, $this->y-$other->y);
        }

        public function __toString() {
            return sprintf("(%s, %s)", $this->x, $this->y);
        }

        public function add($other) {
            $this->x += $other->x;
            $this->y += $other->y;
        }

        public function sub($other) {
            $this->x -= $other->x;
            $this->y -= $other->y;
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

    $a = new Vector(0, 5);
    $b = new Vector(3, 19);
    $c = new Vector(3, 78);
    $d = $a;
    $e = clone $a;

    echo "a: " . $a . PHP_EOL;
    echo "b: " . $b . PHP_EOL;
    echo "c: " . $c . PHP_EOL;

    isEqual($a, $b);
    isEqual($b, $c);

    isNotEqual($a, $b);
    isNotEqual($a, $d);

    $a->add($c);

    echo "a: " . $a . PHP_EOL;

    echo $a->len($b) . PHP_EOL;
    echo $b->len($c) . PHP_EOL;
?>