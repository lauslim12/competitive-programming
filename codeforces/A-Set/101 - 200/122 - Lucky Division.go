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
func solve() {
	// Solve the problem!
	var input int
	const luckyNumbersFromZeroToAThousand int = 14
	var luckyNumbers = [luckyNumbersFromZeroToAThousand]int{4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 777, 774, 747, 744}
	scanf("%d", &input)

	for i := 0; i < luckyNumbersFromZeroToAThousand; i++ {
		if input%luckyNumbers[i] == 0 {
			printf("YES")
			return
		}
	}

	printf("NO")
	return
}

func main() {
	defer writer.Flush()
	solve()
}
