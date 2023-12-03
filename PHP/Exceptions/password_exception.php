<?php
class PasswordException extends Exception
{
	public function __construct(
	$message = 'Не допускается прямого обращения к аттриубуту password')
	{
		parent::__construct($message, 1002);
	}
}