#!/usr/bin/python

grtot = 0

for i in range(2, 355000) :
	tot = 0 

	for p in str(i) :
		tot += int(p)**5
	
	if tot == i :
		print 'Found narcisisstic number '+ str(i)
		grtot += i

print 'Grand Total is '+str(grtot)
