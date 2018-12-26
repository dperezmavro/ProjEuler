import unittest
from main import dec_sqrt,get_sum,is_irrational

class TestMethods(unittest.TestCase):

    def test_dec_sqrt(self):
        self.assertEqual(str(dec_sqrt(2)), '1.41421356237309504880168872420969807856967187537694807317667973799073247846210703885038753432764157273501')
        self.assertEqual(str(dec_sqrt(9)), '3')
        self.assertEqual(str(dec_sqrt(3)), '1.73205080756887729352744634150587236694280525381038062805580697945193301690880003708114618675724857567563')
    
    def test_get_sum(self):
        self.assertEqual(get_sum('1.4142135623730950488016887242096980785696718753769480731766797379907324784621070388503875343276415727'), 475)

    def test_is_irrational(self):
        self.assertEqual(is_irrational('1.41421356'), True)
        self.assertEqual(is_irrational('414213562'), False)


if __name__ == '__main__':
    unittest.main()