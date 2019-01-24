package main

import "fmt"

var N int
var A = make([]int, 1001, 1001)
var D = make([]int, 1001, 1001)

func dp(x, y int) int {
	if x == N {
		return 0
	}
	if D[x] != -1 {
		return D[x]
	}
	D[x] = 0
	if A[x] == y {
		D[x] = dp(x+1, (y+1)%3) + 1
	} else {
		D[x] = dp(x+1, y)
	}
	return D[x]
}

func main() {
	fmt.Scanf("%d", &N)
	for i := 0; i < N; i++ {
		fmt.Scanf("%d", &A[i])
		D[i] = -1
	}
	dp(0, 0)

	fmt.Println(D[0])
}
