<?php
	include 'Paper.php';

	class Pen {
        private $inkAmount;
        private $inkCapacity;

        public function Pen($inkCapacity=4096) {
        	$this->inkAmount = $inkCapacity;
    		$this->inkCapacity = $inkCapacity;
        }

        public function getInkAmount() {
        	return $this->inkAmount;
        }

        public function getInkCapacity() {
        	return $this->inkCapacity;
        }

        public function write($paper, $message) {
		    if ( $this->inkAmount == 0 ) {
		        throw new Exception("OutOfInk");
		    }
		    if ( $this->inkAmount < strlen($message) ) {
		        $paper.addContent(substr($message, $this->inkAmount - 1));
		        $this->inkAmount = 0;
		        return;
		    }
		    $paper->addContent($message);
		    $this->inkAmount -= strlen($message);
        }

        public function refill() {
    		$this->inkAmount = $this->inkCapacity;
        }

        public function output() {
        	echo PHP_EOL . "My Pen properties: " . PHP_EOL .
        	"Ink : (" . $this->inkAmount . "/" . $this->inkCapacity . ")" . PHP_EOL;
        }
	}
?>