from operator import mul

def find_power(n, base):
	pow = 1 ;
	while n/base != 1 :
		pow += 1 
		n /= base
	return pow

if __name__ == '__main__':
	primes = [5,7,11,13,17,19] #ommitting some of the primes with higher powers
	index2 = 1 ;
	index3 = 1 ;
	for n in range(4,21):
		if n % 2 == 0:
			res2 = find_power(n , 2)
			if res2 > index2 : index2 = res2
		elif n % 3 == 0:
			res3 = find_power(n , 3)
			if res3 > index3 : index3 = res3
	
	primes.extend([3**index3, 2**index2])
	print reduce(mul, primes,1)