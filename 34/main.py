import cProfile

upper = 1499999

def process(n) -> int:
    tot = 0 
    for i in str(n):
        tot += fact(int(i, 10))
    return tot

def fact(n) -> int :
    if n == 0 or n == 1: return 1
    else:
        tot = 1
        for i in range(2, n+1):
            tot *= i
        return tot

factorions = [ e for e in range(10, upper) if e == process(e)]
print(sum(factorions))