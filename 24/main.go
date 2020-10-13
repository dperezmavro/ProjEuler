package main

import (
	"log"
)

var permId = 0

func permutate(str, chars string) {
	if len(chars) == 0 {
		permId++
		if permId == 1_000_000 {
			log.Println(str)
			return
		}
	}

	if permId > 1_000_000 {
		return
	}

	for i := 0; i < len(chars); i++ {
		nextRootChar := string(chars[i])
		tmp := chars[0:i] + chars[i+1:]
		permutate(str+nextRootChar, tmp)
	}
}

func main() {
	perm := []byte("0123456789")
	permutate("", string(perm))
}
