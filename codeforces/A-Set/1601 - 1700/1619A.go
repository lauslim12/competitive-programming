package main

import (
	"bufio"
	"fmt"
	"os"
	"strings"
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
	var testCases int
	var text string
	answers := make([]string, 0)

	scanf("%d\n", &testCases)

	for i := 0; i < testCases; i++ {
		scanf("%s\n", &text)

		length := len(text)
		if length%2 == 1 {
			answers = append(answers, "NO")
			continue
		}

		firstPart := text[0 : length/2]
		secondPart := text[length/2:]

		if strings.EqualFold(firstPart, secondPart) {
			answers = append(answers, "YES")
		} else {
			answers = append(answers, "NO")
		}
	}

	for i := 0; i < len(answers); i++ {
		printf("%s\n", answers[i])
	}
}

func main() {
	defer writer.Flush()
	solve()
}
