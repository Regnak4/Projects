<?php
	class Gun {
		private $amount;
        private $capacity;
        private $isReady;
        private $model;
        private $totalShots;

        public function Gun($model = "TT", $capacity = 7) {
        	$this->amount = $capacity;
		    $this->capacity = $capacity;
		    $this->isReady = FALSE;
		    $this->model = $model;
		    $this->totalShots = 0;
        }

        public function getAmount() {
		    return $this->amount;
		}

		public function getCapacity() {
		    return $this->capacity;
		}

		public function ready() {
		    return $this->isReady;
		}

	 	public function getModel() {
		    return $this->model;
		}

		public function getTotalShots() {
		    return $this->totalShots;
		}

		public function prepare() {
		    $this->isReady = !$this->isReady;
		}

		public function reload() {
		    $this->amount = $this->capacity;
		}

		public function shoot() {
		    if ( $this->amount == 0 ) {
		        $this->isReady = FALSE;
		        throw new Exception("Out of Rounds!");
		    }
		    if ( !$this->ready("Not Ready!") ) {
		        throw new Exception();
		    }
		    $this->amount -= 1;
		    $this->totalShots += 1;
		    echo "Bang!" . PHP_EOL;
		}

		public function output() {
			echo PHP_EOL . "=======================" . PHP_EOL  ."Gun model: " . $this->model . PHP_EOL;
		    if ( $this->ready() ) {
		        echo "Gun: Is ready" . PHP_EOL;
		    } else {
		    	echo "Gun: Not ready" . PHP_EOL;
		    }
		    echo "Rounds (" . $this->amount . "/" . $this->capacity . ")" . PHP_EOL
		    . "Shot made: " . $this->totalShots . PHP_EOL . "=======================" . PHP_EOL;
		}
	}
?>