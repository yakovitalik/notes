<?php
require_once 'tag.php';
require_once 'theme.php';

class Page
{
	use Theme, Tag
	{
		Tag::tags insteadof Theme;		// указывает, какой из методов следует использовать
		Theme::themes insteadof Tag;	// указывает, какой из методов следует использовать
		Theme::tags as themeTags;		// указывает новый псевдоним для конфликтующего метода
		Tag::themes as tagThemes;		// указывает новый псевдоним для конфликтующего метода
	}
}

$page = new Page();
$page->themes();						// Theme::themes
$page->tags();							// Tag::tags
$page->themeTags();						// Theme::tags
$page->tagThemes();						// Tag::themes