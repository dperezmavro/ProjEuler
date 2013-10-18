#!/usr/bin/python

nums = {0:"",1:"one",2:"two",3:"three",4:"four",5:"five",6:"six",7:"seven",8:"eight",9:"nine"}
groups = {0:"",1:"ten",2:"twenty",3:"thirty",4:"forty",5:"fifty",6:"sixty",7:"seventy",8:"eighty",9:"ninety",100:"hundred"}
special = {11:'eleven', 12:'twelve',13:'thirteen',14:'fourteen',15:'fifteen',16:'sixteen', 17:'seventeen',18:'eighteen',19:'nineteen'}
and_word = 'and'
count = 'onethousand'

for i in range (0,1000):
    if len(str(i)) == 3 :
        count += nums[int(str(i)[0])] + 'hundred'
        if str(i)[1:] != '00' :
            count += and_word

        if int(str(i)[1:]) in special :
            count += special[int(str(i)[1:])]
        else:
            count += groups[int(str(i)[1])]
            count += nums[int(str(i)[-1])]

    elif len (str(i)) == 2 :
        if i in special : 
            count += special[i]
        else:
            count += groups[int(str(i)[0])]
            count += nums[int(str(i)[1])]
    else:
        count += nums[i]

print count
print len(count)
