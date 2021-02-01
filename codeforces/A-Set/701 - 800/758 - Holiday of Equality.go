package main

import (
	"bufio"
	"fmt"
	"os"
)

// Buffered IO for fast I/O.
var reader *bufio.Reader = bufio.NewReader(os.Stdin)
var writer *bufio.Writer = bufio.NewWriter(os.Stdout)

// Helper functions to wrap around the buffered IO.
func printf(f string, a ...interface{}) {
	fmt.Fprintf(writer, f, a...)
}

// For this function, don't forget to add '\n' every scanf() call.
func scanf(f string, a ...interface{}) {
	fmt.Fscanf(reader, f, a...)
}

// Solve
func max(array ...int) int {
	max := 0
	for _, value := range array {
		if value > max {
			max = value
		}
	}

	return max
}

func solve() {
	// Solution
	var testCases, ans int

	scanf("%d\n", &testCases)
	var welfares = make([]int, testCases)

	for index := range welfares {
		scanf("%d", &welfares[index])
	}

	maxValue := max(welfares...)

	for _, value := range welfares {
		if value != maxValue {
			ans += maxValue - value
		}
	}

	printf("%d", ans)
}

func main() {
	defer writer.Flush()
	solve()
}
