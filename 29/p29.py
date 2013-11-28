#!/usr/bin/python

max_val = 101
seen = set()

for a in range(2,max_val):
    for b in range(2,max_val):
        temp = a**b 
        if temp not in seen:
            seen.add(temp)

print len(seen)
