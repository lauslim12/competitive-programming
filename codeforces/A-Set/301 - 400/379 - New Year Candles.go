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
	var candles, candlesFromBurntOutCandles int
	scanf("%d%d\n", &candles, &candlesFromBurntOutCandles)

	answer := (candles*candlesFromBurntOutCandles - 1) / (candlesFromBurntOutCandles - 1)
	printf("%d", answer)
}

func main() {
	defer writer.Flush()
	solve()
}
