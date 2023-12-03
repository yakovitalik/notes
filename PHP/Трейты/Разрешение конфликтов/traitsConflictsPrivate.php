<?php
// Демонстрируется изменение спецификаторов доступа
require_once 'tag.php';
require_once 'theme.php';

class Page
{
	use Theme, Tag
	{
		Tag::tags insteadof Theme;			// указывает, какой из методов следует использовать
		Theme::themes insteadof Tag;		// указывает, какой из методов следует использовать
		Theme::tags as private themeTags;	// указывает новый псевдоним для конфликтующего метода
		Tag::themes as private tagThemes;	// указывает новый псевдоним для конфликтующего метода
	}
}

$page = new Page();
$page->themes();							// Theme::themes
$page->tags();								// Tag::tags
// $page->themeTags(); 						// Fatal error: call to private method
// $page->tagThemes();						// Fatal error: call to private method