<?php
	class Paper {
        private $maxSymbols;
        private $symbols;
        private $content;

        public function Paper($maxSymbols=4096) {
        	$this->maxSymbols = $maxSymbols;
		    $this->symbols = 0;
		    $this->content = "";
        }

        public function getMaxSymbols() {
    		return $this->maxSymbols;
        }

        public function getSymbols() {
        	return $this->symbols;
        }

        public function addContent($message) {
		    $total = $this->symbols + strlen($message);

		    if ( $this->symbols == $this->maxSymbols ) {
		        throw new Exception("OutOfSpace");
		    }
		    if ( $total > $this->maxSymbols ) {
		        $len = $this->maxSymbols - $this->symbols;

		        $this->content += substr($message, $len - 1);
		        $this->symbols = $this->maxSymbols;
		        return;
		    }
		    $this->content = $this->content . $message;
		    $this->symbols += strlen($message);
        }

        public function show() {
        	echo "Message: " . $this->content . PHP_EOL;
        }

        public function output() {
        	echo PHP_EOL . "My Piece of paper properties: " . PHP_EOL .
        	"Symbols on it: " . $this->symbols . " of " . $this->maxSymbols . PHP_EOL;
        }
	}
?>