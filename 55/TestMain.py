import unittest
from main import is_palindrome,isPalindrome

class TestMethods(unittest.TestCase):

    def test_is_palindrome(self):
        self.assertEqual(is_palindrome("101"), True)
        self.assertEqual(is_palindrome("4668731596684224866951378664"), True)
        self.assertEqual(is_palindrome("133"), False)
    
    def test_isPalindrome(self):
        self.assertEqual(isPalindrome(47), True)
        self.assertEqual(isPalindrome(349), True)
        self.assertEqual(isPalindrome(592), False)

    def test_results(self):
        upperBound = 900
        l_n = [i for i in range(1,upperBound) if not isPalindrome(i) ]
        want = [196, 295, 394, 493, 592, 689, 691, 788, 790, 879, 887]
        self.assertEqual(want, l_n)


if __name__ == '__main__':
    unittest.main()