package main

import (
	"bufio"
	"fmt"
	"os"
)

// Buffered IO for fast I/O.
var reader *bufio.Reader = bufio.NewReader(os.Stdin)
var writer *bufio.Writer = bufio.NewWriter(os.Stdout)

// Helper function to wrap around the buffered IO.
func printf(f string, a ...interface{}) {
	fmt.Fprintf(writer, f, a...)
}

// Helper function to take an input from the user.
func scanf(f string, a ...interface{}) {
	fmt.Fscanf(reader, f, a...)
}

// Solve
func solve() {
	// Solve the problem!
	var numberOfFactors int
	scanf("%d", &numberOfFactors)

	// Any 5 powered by anything will always have '25' as its last two digits.
	printf("25\n")
	return
}

func main() {
	defer writer.Flush()
	solve()
}
