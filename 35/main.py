from functools import reduce

upper = 1000000

def primes_bellow(n):
    primes = [i for i in range(1, n)]
    for i in range(2, n+1):
        exp = 2
        while i * exp < n:
            primes[(i*exp) - 1] = 0
            exp += 1

    return [x for x in primes if x != 0]

def shifts(n):
    s_n = str(n)
    res = [n]
    for d in range(1, len(s_n)):
        a = s_n
        num = int(s_n[d:] +s_n[0:d],10)
        res.append(num)
    return res


if __name__ == "__main__":
    primes = primes_bellow(upper)
    prime_dict = dict(zip(primes, primes))

    circular_primes = []

    for p in primes:
        mutations = shifts(p)
        if mutations == []:
            continue
        in_p = map(lambda x: x in prime_dict, mutations)
        is_circ = reduce(lambda a,b: a and b , in_p, True)
        if is_circ:
            circular_primes.append(p)

    circular_primes.pop(0) # remove 1
    print(circular_primes, len(circular_primes))