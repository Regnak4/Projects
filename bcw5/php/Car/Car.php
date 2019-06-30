<?php
	include 'Point.php';

	class Car {
		private $fuelAmount;
		private $fuelCapacity;
		private $fuelConsumption;
		private $location;
		private $model;

		public function Car($capacity = 100, $consumption = 0.5, $location, $model = "Fiat") {
			$this->fuelCapacity = $capacity;
			$this->fuelAmount = $capacity;
			$this->fuelConsumption = $consumption;
			$this->location = $location;
			$this->model = $model;
		}

		public function getFuelAmount() {
			return $this->fuelAmount;
		}

        public function getFuelCapacity() {
        	return $this->fuelCapacity;
        }

        public function getFuelConsumption() {
        	return $this->fuelConsumption;
        }

        public function getLocation() {
        	return $this->location;
        }

        public function getModel() {
        	return $this->model;
        }

        public function drive($destination) {
        	$fuelNeed = $this->location->distance($destination) * $this->fuelConsumption;
        	$newFuelAmount = $this->fuelAmount - $fuelNeed;

    	    if ( $newFuelAmount < 0 ) {
    	    	$maxDistance = $this->fuelAmount * $this->fuelConsumption;
    	    	$this->location->setX($maxDistance / 2 + $this->location->getX());
    	    	$this->location->setY($maxDistance / 2 + $this->location->getY()); 
    	    	$this->fuelAmount = 0;
		        throw new Exception("Out of Fuel!!");
		    }

		    $this->fuelAmount = $newFuelAmount;
    		$this->location = $destination;
        }

        public function refill($fuel) {
        	$newFuelAmount = $this->fuelAmount + $fuel;
		    $this->fuelAmount = $newFuelAmount;

		    if ( $newFuelAmount > $this->fuelCapacity ) {
				$this->fuelAmount = $this->fuelCapacity;
		        throw new Exception("Too much fuel!!");
		    }
        }

        public function output() {
        	echo PHP_EOL . "=======================" . PHP_EOL  ."Car: " . $this->model . PHP_EOL
		    . "Car Location: " . $this->location . PHP_EOL
		    . "Fuel Amount: " . $this->fuelAmount . " of " . $this->fuelCapacity . PHP_EOL
		    . "Consumption: " . $this->fuelConsumption . PHP_EOL . "=======================" . PHP_EOL;
        }
	}
?>