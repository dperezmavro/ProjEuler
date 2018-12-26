n = 100
sum_sq = sum([i*i for i in range(1,n+1)])
sq_sum = sum([i for i in range(1,n+1)])
sq_sum *= sq_sum

print(sq_sum - sum_sq)