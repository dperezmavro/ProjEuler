#!/usr/bin/python

import gc
import math

def pals() :
	palindromes = list()
	gc.disable() #it can potentially slow down the loop interation
	for a in range(1,10) :
		for b in range(10):
			for c in range (10):
				number = a*(1+ 10**5) + b*(10**4+10) + c*(10**2 + 10**3)
				palindromes.append(number)
	gc.enable()
	return palindromes


def FermatFactorization(N) :
	a = math.ceil(math.sqrt(N))
	b = a**2 -N

	while not (int(math.sqrt(b)) == math.sqrt(b)) : # test that B is a square, could probably be done more efficiently
		a = a+ 1
		b = a**2 - N 
	return a-math.sqrt(b),a+math.sqrt(b)


palindromes = [p for p in reversed(pals())]
for i in palindromes :
	print 'Running for '+str(i)
	res = FermatFactorization(i)
	if len(str(int(res[0])))  == 3  and len(str(int(res[1]))) == 3 :
		print 'First palindrome which is a product of two 3-digit numbers is '+str(i)
		print str(i)+' : '+str(res[0])+', '+str(res[1])
		break
