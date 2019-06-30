<?php
	class Count {
	    static $instances = 0;
	    public $instance;

	    public function Count() {
	        $this->instance = ++self::$instances;
	    }

	    public function __clone() {
	        $this->instance = ++self::$instances;
	    }
	}
?>