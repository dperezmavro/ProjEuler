from decimal import *
getcontext().prec = 105

def dec_sqrt(n):
    return Decimal(n).sqrt()

def get_sum(n):
    dec_part = str(n).replace('.', '' )[0:100]
    return sum([int(i, 10) for i in dec_part])

def is_irrational(n):
    return str(n).find('.') != -1

if __name__ == '__main__':
    sq_roots = [dec_sqrt(i) for i in range(1, 100)]
    irr = [get_sum(i) for i in sq_roots if is_irrational(i)]
    print(sum(irr))