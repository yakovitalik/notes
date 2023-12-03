' Простая программа проверки пароля на Liberty BASIC
PROMPT "What is the password?"; Password$
WHILE Password$ <> "open"
	PRINT "Wrong password, moron. Try again."
WEND
PRINT "You typed the correct password!"
END