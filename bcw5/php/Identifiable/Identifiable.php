<?php
	class Identifiable {
	    static $instances = 0;
	    public $instance;

	    public function Identifiable() {
	        $this->instance = rand(0, 999);
	    }

	    public function __clone() {
	        $this->instance = rand(0, 999);
	    }
	}
?>