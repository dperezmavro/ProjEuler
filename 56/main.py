maxSum = 0 
for i in range(1,100):
    for j in range(1,100):
        d = i ** j
        s = sum( [ int(a,10) for a in str(d) ] )
        if s > maxSum :
            maxSum = s
            print(i, "**", j , s)