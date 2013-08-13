from math import *

def fermat_factor(n):
	a = ceil(sqrt(n))
	b = a * a - n 
	while not (sqrt(b) == modf(sqrt(b))[1]) :
		a += 1
		b =  a*a - n

	return [a+sqrt(b), a-sqrt(b)]

if __name__ == '__main__':
	a = 600851475143 
	nums = set()
	temp = set()
	while 1:
		res = fermat_factor(a)
		rem = []
		newel = [] 
		temp.add(res[0])
		temp.add(res[1])
		for i in temp :
			b = fermat_factor(i)
			if b[0] == i :
				rem.append(i)
				nums.add(i)
			else :
				newel.append(b[0])
				newel.append(b[1])
				
		for i in rem :
			temp.remove(i)
		for i in newel :
			temp.add(i)
		
		if len(temp) > 0 :
			a = temp.pop()
		else :
			break;
			
	print sorted(list(nums))