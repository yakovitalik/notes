# находит число фибонначи по номеру
n = int(input())
while True:
        fib = [0, 1]
        while len(fib) <= n:
                fib.append(fib[-2]+fib[-1])
        print(fib[-1])
        break
