<?php
require_once 'attribute_exception.php';
require_once 'password_exception.php';

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
		if($index == 'password') {
			throw new PasswordException;
		}
		if(isset($this->$index)) {
			return this->$index;
		} else {
			throw new AttributeException($index);
		}
	}
	
	private function __set($index, $value)
	{
		if(isset($this->$index)) {
			$this->$index = $value;
		} else {
			throw new AttributeException($index);
		}
	}
	
	public function isPasswordCorrect($password)
	{
		return $this->password == $password;
	}
}