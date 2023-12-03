<?php
class User 
{
	private $firstName;
	private $lastName;
	private $email;
	private $password;
	
	public function __construct(
	$email, 
	$password,
	$firstName = null,
	$lastName = null)
	{
		$this->firstName = $firstName;
		$this->lastName = $lastName;
		$this->email = $email;
		$this->password = $password;
	}
	
	private function __get($index)
	{
		return $this->$index;
	}
	
	private function __set($index, $value)
	{
		if(isset($this->$index)) {
			$this->$index = $value;
		}
	}
}