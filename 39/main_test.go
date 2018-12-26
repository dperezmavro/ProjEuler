package main

import "testing"

func TestGetSolutions(t *testing.T) {
	tests := []struct {
		name      string
		sideSum   uint
		solutions uint
	}{
		{
			name:      "3,4,5",
			sideSum:   12,
			solutions: 2,
		},
		{
			name:      "{20,48,52}, {24,45,51}, {30,40,50}",
			sideSum:   120,
			solutions: 6,
		},
		{
			name:      "solution",
			sideSum:   840,
			solutions: 16,
		},
	}

	for _, tt := range tests {
		t.Run(tt.name, func(*testing.T) {
			var s = uint(len(getSolutions(tt.sideSum)))
			if tt.solutions != s {
				t.Errorf("wanted %d, got: %d", tt.solutions, s)
			}
		})
	}
}
