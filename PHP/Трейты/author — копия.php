<?php
trait Author
{
	public $authors;
	
	public function getAthor()
	{
		return $this->authors;
	}
	
	public function setAuthor($authors)
	{
		$this->authors = $authors;
	}
}