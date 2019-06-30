<?php
	class Unit {
        private $damage;
        private $hitPoints;
        private $hitPointsLimit;
        private $name;
        private function ensureIsAlive() {
        	if ( $this->hitPoints == 0 ) {
		        throw new Exception("Unit is Dead!");
		    }
        }

        public function Unit($name, $hp, $dmg) {
        	$this->damage = $dmg;
		    $this->hitPoints = $hp;
		    $this->hitPointsLimit = $hp;
		    $this->name = $name;
        }

        public function getDamage() {
        	$this->damage;
        }

        public function getHitPoints() {
        	$this->hitPoints;
        }

        public function getHitPointsLimit() {
        	$this->hitPointsLimit;
        }

        public function getName() {
        	$this->name;
        }

        public function addHitPoints($hp) {
        	$this->ensureIsAlive();

		    $healedHp = $this->hitPoints + $hp;

		    if ( $healedHp >  $this->hitPointsLimit ) {
		        $healedHp = $this->hitPointsLimit;
		    }
		    $this->hitPoints = $healedHp;
        }

        public function takeDamage($dmg) {
		    $this->ensureIsAlive();

		    $this->hitPoints -= $dmg;

		    if ( $this->hitPoints < 0 ) {
		        $this->hitPoints = 0;
		        throw new Exception("Unit is Dead!");
		    }
        }

        public function attack($enemy) {
        	$enemy->takeDamage($this->damage);
    		$enemy->counterAttack($this);
        }

        public function counterAttack($enemy) {
        	$enemy->takeDamage($this->damage/2);
        }

        public function output() {
        	echo PHP_EOL . "==================" . PHP_EOL .
        	"Unit name: " . $this->name . "," . PHP_EOL .
        	"Unit HP: (" . $this->hitPoints . "/" . $this->hitPointsLimit . ")" . "," .PHP_EOL .
        	"Unit damage: " . $this->damage . ";" . PHP_EOL . "==================" . PHP_EOL;
        }
	}
?>