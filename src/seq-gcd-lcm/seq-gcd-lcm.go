package main

import (
	_ "fmt"
	"math/rand"
	"os"
	"strconv"
	"time"
)

const RANGE = 1000

func main() {
	rand.Seed(time.Now().UTC().UnixNano())
	var first, second, hcf, lcm int
	N, _ := strconv.Atoi(os.Args[1])

	for i := 0; i <= N; i++ {
		first = rand.Intn(RANGE-1) + 1
		second = rand.Intn(RANGE-1) + 1

		hcf = gcd(first, second)
		lcm = (first * second) / hcf
		_ = lcm
	}
}

func gcd(first, second int) int {
	if second == 0 {
		return first
	} else {
		return gcd(second, first%second)
	}
}
