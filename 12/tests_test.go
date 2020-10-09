package main

import (
	"testing"

	"github.com/stretchr/testify/assert"
)

func TestGenerateTriangularNumber(t *testing.T) {
	type test struct {
		in   uint64
		want uint64
	}

	makeTest := func(i, w uint64) test {
		return test{
			in:   i,
			want: w,
		}
	}
	tests := []test{
		makeTest(1, 1),
		makeTest(2, 3),
		makeTest(3, 6),
		makeTest(4, 10),
		makeTest(5, 15),
		makeTest(6, 21),
		makeTest(7, 28),
		makeTest(8, 36),
		makeTest(9, 45),
		makeTest(10, 55),
	}

	for _, tt := range tests {
		res := generateTriangularNumber(tt.in)
		if res != tt.want {
			t.Errorf("wanted %d for %d, got %d", tt.want, tt.in, res)
		}
	}
}

func TestPrimeDecompositionDumb(t *testing.T) {
	type test struct {
		in   uint64
		want []uint64
	}

	makeTest := func(i uint64, w []uint64) test {
		return test{
			in:   i,
			want: w,
		}
	}
	tests := []test{
		makeTest(generateTriangularNumber(1), []uint64{1}),
		makeTest(generateTriangularNumber(2), []uint64{1, 3}),
		makeTest(generateTriangularNumber(3), []uint64{1, 2, 3}),
		makeTest(generateTriangularNumber(4), []uint64{1, 2, 5}),
		makeTest(generateTriangularNumber(5), []uint64{1, 3, 5}),
		makeTest(generateTriangularNumber(6), []uint64{1, 3, 7}),
		makeTest(generateTriangularNumber(7), []uint64{1, 2, 7}),
		makeTest(generateTriangularNumber(8), []uint64{1, 2, 3}),
		makeTest(generateTriangularNumber(9), []uint64{1, 3, 5}),
		makeTest(generateTriangularNumber(10), []uint64{1, 5, 11}),
	}

	for _, tt := range tests {
		res := primeDecompositionDumb(tt.in)
		assert.Equalf(t, tt.want, res, "wanted %+v for %d, got %+v", tt.want, tt.in, res)
	}
}

func TestGetDivisors(t *testing.T) {
	type test struct {
		in   uint64
		want []uint64
	}

	makeTest := func(i uint64, w []uint64) test {
		return test{
			in:   i,
			want: w,
		}
	}
	tests := []test{
		makeTest(generateTriangularNumber(1), []uint64{1}),
		makeTest(generateTriangularNumber(2), []uint64{1, 3}),
		makeTest(generateTriangularNumber(3), []uint64{1, 2, 3, 6}),
		makeTest(generateTriangularNumber(4), []uint64{1, 2, 5, 10}),
		makeTest(generateTriangularNumber(5), []uint64{1, 3, 5, 15}),
		makeTest(generateTriangularNumber(6), []uint64{1, 3, 7, 21}),
		makeTest(generateTriangularNumber(7), []uint64{1, 2, 4, 7, 14, 28}),
		makeTest(generateTriangularNumber(8), []uint64{1, 2, 3, 4, 6, 9, 12, 18, 36}),
		makeTest(generateTriangularNumber(9), []uint64{1, 3, 5, 9, 15, 45}),
		makeTest(generateTriangularNumber(10), []uint64{1, 5, 11, 55}),
	}

	for _, tt := range tests {
		res := getDivisors(tt.in)
		assert.Equalf(t, tt.want, res, "wanted %+v for %d, got %+v", tt.want, tt.in, res)
	}
}
