def is_palindrome(n):
    s_n = str(n)
    for i in range(0,len(s_n)):
        if s_n[i] != s_n[-(i+1)]:
            return False
    return True

def i2b(n):
    return str(bin(n))[2:]

upper=1000000
base_10_palindromes = [i for i in range(1,upper) if is_palindrome(i)]
total_p = [i for i in base_10_palindromes if is_palindrome(i2b(i))]
print(sum(total_p))
