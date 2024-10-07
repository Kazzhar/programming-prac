//      https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/?envType=daily-question&envId=2024-04-07
//      Data Structure: vectors
//      Algorithm: none

package main
import ("fmt" 
"math")
func main(){
	var s string
	var cm, mm int
	cm=0
	fmt.Scanln(&s)
	for i:=range s{
		if s[i]=='('{
			cm+=1
			mm=int(math.Max(float64(mm), float64(cm)))
		}else if s[i]==')'{
			cm-=1
		}
	}
	fmt.Println(mm)
}