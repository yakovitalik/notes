# программа сокращает число до одной цифры
s = input()
x = 0
sum2 = 0
sum3 = 0
for i in s:
        x = x + int(i)

z = str(x)
if len(z) > 1:
        for j in z:
                sum2 += int(j)
        r = str(sum2)
        if len(r) > 1:
                for k in r:
                        sum3 += int(k)
                print(sum3)
        else:
                print(r)
else:
        print(z)
