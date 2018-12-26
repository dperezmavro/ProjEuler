package main

import "log"

type side struct {
	length uint
	square uint
}

type triangle struct {
	a, b, c side
}

type sides struct {
	b, c       side
	sumSquared uint
}

func buildBigSideSquares(upperLimit uint) map[uint]uint {
	var biggerSideSquares = make(map[uint]uint, upperLimit/2)
	var i uint
	for i = upperLimit / 3; i < upperLimit/2; i++ {
		biggerSideSquares[i*i] = i
	}

	return biggerSideSquares
}

func calculatePairs(p uint) []sides {
	var i uint
	var s []sides
	for i = 1; i < p; i++ {
		s = append(s, sides{
			b: side{
				length: i,
				square: i * i,
			},
			c: side{
				length: p - i,
				square: (p - i) * (p - i),
			},
			sumSquared: (i * i) + ((p - i) * (p - i)),
		})
	}
	return s
}

func allPairs(perimeter uint) []sides {
	var i uint
	var upperBound = ((perimeter + 1) * 2) / 3
	var s []sides
	for i = 2; i < upperBound; i++ {
		s = append(s, calculatePairs(i)...)
	}
	return s
}

func getSolutions(p uint) []triangle {
	m := buildBigSideSquares(p)
	pairs := allPairs(p)
	var triangles []triangle

	for _, s := range pairs {
		if m[s.sumSquared] != 0 && s.c.length+s.b.length+m[s.sumSquared] == p {
			triangles = append(triangles,
				triangle{
					b: s.b,
					c: s.c,
					a: side{
						length: m[s.sumSquared],
					},
				})
		}
	}

	return triangles
}

func main() {
	max := 0
	var i uint
	for i = 3; i <= 1000; i++ {
		solutions := getSolutions(i)
		if len(solutions) > max {
			log.Printf("new max for %d: %d", i, len(solutions))
			max = len(solutions)
		}
	}

}
