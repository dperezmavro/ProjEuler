package main

import (
	"log"
)

func getDivisors(num uint64) []uint64 {
	var res []uint64 = []uint64{
		1,
	}
	var i uint64 = 2

	for ; i < (num/2)+1; i++ {
		if num%i == 0 {
			res = append(res, i)
		}
	}

	return res
}

func divisorSum(i uint64) uint64 {

	divisors := getDivisors(i)

	var sum uint64 = 0

	for _, v := range divisors {
		sum += v
	}

	return sum
}

func main() {
	var a uint64 = 1
	pairs := make(map[uint64]bool, 1000)
	var total uint64 = 0
	for ; a <= 10000; a++ {
		b := divisorSum(a)
		d_b := divisorSum(b)
		if a == d_b && a != b {
			log.Printf("%d(%d) and %d(%d) are amicable\n", a, b, b, d_b)
			pairs[a] = true
			pairs[b] = true

		}
	}

	for v := range pairs {
		total += v
	}

	log.Printf("total is %d\n", total)

}
