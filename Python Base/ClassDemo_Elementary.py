class Worker:
	def __init__(self, name, pay):	# инициализировать при создании
		self.name = name	# self - новый объект
		self.pay = pay
	def lastName(self):
		return self.name.split()[-1]	# разбить строку по пробелам
	def giveRaise(self, percent):
		self.pay *= (1.0 + percent)	# обновить pay на месте

bob = Worker('Bob Smith', 50000)	# создать два экземпляра
sue = Worker('Sue Jones', 60000)	# каждый имеет атрибуты name и pay

bob.lastName()	# Вызваь метод: bob - это self, выведет фамилию ('Smith')
sue.lastName()	# sue - это self, выведет фамилию ('Jones')

sue.GiveRaise(0.10)	#Обновить атрибут pay в экземпляре sue
print (sue.pay)	# выведет 66000.0