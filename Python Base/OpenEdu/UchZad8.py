# находит элемент встречающийся в строке чаще всего
string = input()
chars = {}
for i in string:
    chars.update({string.count(i): i})
print((max(chars.items())[1]))
