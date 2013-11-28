#!/usr/bin/python

#random cheat : use cat names.txt | sort > names_s.txt

from string import *

letters = ascii_uppercase
total_score = 0
i = 1

def score(name):
    tot = 0 
    for letter in name:
        tot += letters.find(letter) + 1
    return tot

f = open('names_s.txt','r')
for line in f:
    total_score += i*score(line)
    i += 1

print total_score
