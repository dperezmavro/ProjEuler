iterationBound = 50

def is_palindrome(s_n):
    for i in range(0,len(s_n)):
        if s_n[i] != s_n[-(i+1)]:
            return False
    return True

def isPalindrome(n):
    current = n
    for i in range(0, iterationBound):
        s_n = str(current)
        if is_palindrome(s_n) and i > 0:
            return True
        else:
            current = current + int(s_n[::-1] , 10)
    
    return False

if __name__ == '__main__':
    upperBound = 10000
    l_n = [i for i in range(1,upperBound) if not isPalindrome(i) ]
    print(len(l_n), l_n)