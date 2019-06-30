<?php
	class Mohican {
		static $lastMohican;
	    static $id = 0;
	    private $selfID;
	    private $name;

	    public function Mohican($name) {
	        $this->selfID = ++self::$id;
	        $this->name = $name;
	        self::$lastMohican = $this;
	    }

	    public function __clone() {
	        $this->selfID = ++self::$id;
	        $this->name = $this->name;
	        self::$lastMohican = $this;
	    }

	    public function setName($name) {
	    	$this->name = $name;
	    }
	}
?>