# находит номер элемента в списке фиббоначи
def get_fib_ind(n):
    ind = 0
    a, b = 0, 1
    while b <= n:
        ind += 1
        a, b = b, a+b
        if a == n:
            return ind
    return -1
    
print(
    get_fib_ind(
        int(input())
    )
)