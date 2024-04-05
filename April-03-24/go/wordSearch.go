//      https://leetcode.com/problems/word-search/description/?envType=daily-question&envId=2024-04-03
//      Data Structure: vectors
//      Algorithm: backtracking, dfs

package main

import "fmt"

func solve(board [][]byte, i, j int, word string, pos int) bool {
	m := len(board)
	n := len(board[0])
	if pos >= len(word) {
		return true
	}
	if i < 0 || j < 0 || i >= m || j >= n || board[i][j] != word[pos] {
		return false
	}
	c := word[pos]
	board[i][j] = '\x00'
	if solve(board, i+1, j, word, pos+1) || solve(board, i-1, j, word, pos+1) || solve(board, i, j-1, word, pos+1) || solve(board, i, j+1, word, pos+1) {
		return true
	}
	board[i][j] = c
	return false
}

func exist(board [][]byte, word string) bool {
	for i := range board {
		for j := range board[i] {
			if board[i][j] == word[0] {
				if solve(board, i, j, word, 0) {
					return true
				}
			}
		}
	}
	return false
}

func main() {
	var m, n int
	fmt.Println("Enter the dimensions of the 2D slice (m x n):")
	fmt.Scanf("%d %d",&m, &n)

	board := make([][]byte, m)
	for i := range board {
		board[i] = make([]byte, n)
		fmt.Println("Enter elements for row ")
		for j := range board[i] {
			fmt.Scanf("%c",&board[i][j]) // Read a single byte
		}
		fmt.Scanln()
		fmt.Println("the", i, "row is")
		for j := range board[i] {
			fmt.Print(string(board[i][j]))
		}
		fmt.Println()
	}

	fmt.Println("printing whole board")
	for i := range board {
		for j := range board[i] {
			fmt.Print(string(board[i][j]), " ")
		}
		fmt.Println()
	}

	var word string
	fmt.Println("Enter the word to search:")
	fmt.Scanf("%s ", &word)

	fmt.Println("Output:", exist(board, word))
}
