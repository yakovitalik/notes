# Демонстрация словарей Python
# в словаре элементы нумеруются ключами

D = {}
D ['name'] = 'Bob'
D ['job'] = 'dev'
D ['age'] = 40
print (D) # вывод словаря на печать
print (D['name'])

bob1 = dict(age = 40, name='Bob', job='dev') #другая форма
print bob1

bob2 = dict(zip(['name', 'job', 'age'], ['Bob', 'dev', 40])) #связывание вместе(3я форма)
print (bob2)

# поиск ключа
'f' in D	# true or false

if not 'f' in D:
	print('Missing')