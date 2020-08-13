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
}

func main() {
	defer writer.Flush()
	solve()
}
