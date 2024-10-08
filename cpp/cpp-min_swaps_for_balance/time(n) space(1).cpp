//      https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/description/?envType=daily-question&envId=2024-10-08
//      topic: strings, pointers, common sense
//      data structure: none
//      algorithm: swapping algorithm

//the trick is to find the number of UNMATCHED OPENING BRACKETS
//once we have the number of unmatched opening brackets, ans/2
// ex: ]][[ -> 2 unmatched opening brackets
// now if we swap the second opening bracket with a closing bracket, the first opening bracket is also matched
// therefore, we match two opening brackets with one swap

class Solution {
public:
    int minSwaps(string s) {\
        int unmatched=0;
        for(char c: s){
            if(c==']' && unmatched>0)unmatched--;
            else unmatched++;
        }
        return (unmatched+1)/2;
    }
};