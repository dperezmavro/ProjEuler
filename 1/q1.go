package main

import "log"

func main() {
	tot := 0
	for i := 0; i < 1000; i++ {
		if i%3 == 0 {
			tot += i
		} else if i%5 == 0 {
			tot += i
		}
	}

	log.Println(tot)

}
