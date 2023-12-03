' Программа для записи строки в текстовый файл

OPEN "A:\STUFF.TXT" FOR OUTPUT AS #Secrets
PRINT #Secrets, "Эта строка сохраняется в текстовом файле."
CLOSE #Secrets
END