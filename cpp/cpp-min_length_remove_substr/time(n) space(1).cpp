//      https://leetcode.com/problems/minimum-string-length-after-removing-substrings/solutions/5880024/sc-o-n-o-1-stack-vs-in-place-approach-explained/
//      topic: strings, stacks, pointers
//      data structure: vectors, strings
//      algorithm: none

class Solution {
public:
    int minLength(string s) {
        //trick is to reuse the string as a stack with manipulating the string at stack_top position
        //here the stack top number acts as the count of total number of elements in the stack
        int stack_top=0;
        for(auto c: s){
            // if stack has elements, top of stack && curr element match criteria, pop stack
            if(stack_top>0 && ((c=='B'&&s[stack_top-1]=='A')||(c=='D'&&s[stack_top-1]=='C'))) stack_top--;
            // else, push element to the top of the stack
            else s[stack_top++]=c;
        }
        //return total elements in the stack
        return stack_top;
    }
};