<?php
	class Passport {
		static $id = 0;
		static $ser = "AA";
		static $allow = 0;
		static $UpperCaseList = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ';
		private $serie;
		private $number;
		private $name;
		private $surname;
		private $date;

		public function Passport($name, $surname, $year, $month, $day) {
			$this->name = $name;
			$this->surname = $surname;

			if ( $day < 1 || $day > 31 ) {
		        throw new Exception("Invalid date!");
		    }
		    if ( $month < 1 || $month > 12 ) {
		        throw new Exception("Invalid month!");
		    }
		    if ( $year < 0 ) {
		        throw new Exception("Invalid year!");
		    }
		    if ( $month == 2 || $month == 4 || $month == 6 || $month == 9 || $month == 11 ) {
		        if ( $day == 31 ) {
		            new Exception("This month doesn`t contain so many days!");
		        }
		    }
		    if ( $day == 30 && $month == 2 ) {
		        throw new Exception("February doesn`t have so days!");
		    }
		    if ( $year % 4 != 0 ) {
		        if ( $day == 29 && $month == 2 ) {
		            throw new Exception("February doesn`t contain 29 days this year!");
		        }
		    }

			$this->date = date("j M Y", mktime(0, 0, 0, $month, $day, $year));
			++self::$id;
			if ( $this->number > 999999 ) {
				self::$ser = "";
				self::$ser .= self::$UpperCaseList[mt_rand(0, strlen(self::$UpperCaseList) - 1)];
				self::$ser .= self::$UpperCaseList[mt_rand(0, strlen($UpperCaseList) - 1)];
				self::$id = 0;
			}
			if ( $this->number < 100000 ) {
				for ( $i = 0; $i < 10 - strlen(self::$id); $i++) {
					self::$id = "0" . self::$id;
				}
				$this->number = self::$id;
			}
			if ( strlen(self::$ser) > 2 ) {
				substr(self::$ser, 0, 2);
			}
			$this->serie = strtoupper(self::$ser);
		}

		public function setSerie($seria) {
			self::$ser = strtoupper(substr($seria, 0, 2));
			$this->serie = self::$ser;
			self::$id = 1;
			self::$allow = 1;
			if ( $this->number < 100000 ) {
				for ( $i = 0; $i < 10 - strlen(self::$id); $i++) {
					self::$id = "0" . self::$id;
				}
				$this->number = self::$id;
			}
		}

		public function setNumber($num) {
			if ( self::$allow != 1 ) {
				throw new Exception("You`re not allowed to set new number!");
			} else {
				self::$id = $num;
				$this->number = self::$id;
			}
			self::$allow = 0;
		}
	}
?>