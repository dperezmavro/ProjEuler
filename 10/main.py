def primes_bellow(n):
    primes = [i for i in range(1, n)]
    for i in range(2, n):
        exp = 2
        while i * exp < n:
            primes[(i*exp) - 1] = 0
            exp += 1

    return [x for x in primes if x != 0]


if __name__ == "__main__":
    primes = primes_bellow(2000000)
    print(sum(primes)-1)