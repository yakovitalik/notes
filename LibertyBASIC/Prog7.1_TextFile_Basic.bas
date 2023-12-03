' Программа для записи строки в уже существующий текстовый файл 

OPEN "A:\STUFF.TXT" FOR OUTPUT AS #Secrets
PRINT #Secrets, "Эта строка сохраняется в текстовом файле."
CLOSE #Secrets
OPEN "A:\STUFF.TXT" FOR APPEND AS #Secrets
PRINT #NewStuff, ""Эти данные добавляются в существующий файл."
CLOSE #NewStuff
END