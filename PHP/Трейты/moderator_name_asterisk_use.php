<?php
require_once 'moderatir_name_asterisk.php';

$user = new Moderator(
'igorsimdyanov#gmail.com',
'password',
'Игорь',
'Симяднов');

echo $user->fullName();	// Игорь Симяднов*