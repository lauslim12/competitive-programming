package main

import "fmt"

const maxTime int = 240
const solvingTime int = 5

func main() {
	var problems, timeToParty, timeToSolve, answer int
	fmt.Scanln(&problems, &timeToParty)

	for i := 1; i <= problems; i++ {
		timeToSolve += solvingTime * i
		timeToDoEverything := maxTime - timeToSolve - timeToParty
		
		if timeToDoEverything >= 0 {
			answer++
		} else {
			break
		}
	}

	fmt.Println(answer)
}