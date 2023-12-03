<?php
class User
{
	public $firstName;
	public $lastName;
	public $email;
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
	
	public function fullName()
	{
		$arrName = array_filter([$this->firstName, $this->lastName]);
		$fullName = implode(' ', $arrName);
		return $fullName ? $fullName : 'Анонимный пользователь';
	}
}