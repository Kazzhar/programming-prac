// https://leetcode.com/problems/isomorphic-strings/?envType=daily-question&envId=2024-04-02
// Data Structure: maps
// ALgorithm: none
package main

import "fmt"

func main() {
	var a, b string
	fmt.Scanf("%s %s", &a, &b)
	a2b := make(map[rune]rune)
	b2a := make(map[rune]rune)
	for i := range a {
		chara := rune(a[i])
		charb := rune(b[i])
		if a2b[chara] == '\x00' && b2a[charb] == '\x00' {
			a2b[chara] = charb
			b2a[charb] = chara
		} else if a2b[chara] != charb || b2a[charb] != chara {
			fmt.Println("false")
			return
		}
	}
	fmt.Println("true")
}
