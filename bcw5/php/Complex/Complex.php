<?php
	class Complex {
        private $real;
        private $imaginary;

        public function Complex($real=0, $imaginary=0) {
            $this->real = $real;
            $this->imaginary = $imaginary;
        }

        public function getReal() {
            return $this->real;
        }

        public function getIm() {
            return $this->imaginary;
        }

        public function setX($real) {
            $this->real = $real;
        }

        public function setY($imaginary) {
            $this->imaginary = $imaginary;
        }

        public function __toString() {
            return sprintf("(%s, %s)", $this->real, $this->imaginary);
        }

        public function add($other) {
            $this->real += $other->real;
            $this->imaginary += $other->imaginary;
        }

        public function sub($other) {
            $this->real -= $other->real;
            $this->imaginary -= $other->imaginary;
        }

        public function mux($other) {
		    $this->real = $real * $other->real - $imaginary * $other->imaginary;
		    $this->imaginary = $imaginary * $other->real + $real * $other->imaginary;
        }

        public function output() {
	    	if ( $this->imaginary < 0 ) {
	    		echo "(" . $this->real . $this->imaginary . "i" . ")";
	    	} else {
	    		echo "(" . $this->real . "+" . $this->imaginary . "i" . ")";
	    	}
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

    $a = new Complex(0, 5);
    $b = new Complex(3, 19);
    $c = new Complex(3, -78);
    $d = $a;
    $e = clone $a;

    echo "a: ";
    echo $a->output() . PHP_EOL;
    echo "b: " . $b . PHP_EOL;
    echo "c: " . $c . PHP_EOL;

    isEqual($a, $b);
    isEqual($b, $c);

    isNotEqual($a, $b);
    isNotEqual($a, $d);

    $a->add($c);

    $a->output();
?>