//      https://leetcode.com/problems/minimum-string-length-after-removing-substrings/solutions/5880024/sc-o-n-o-1-stack-vs-in-place-approach-explained/
//      topic: strings, stacks, pointers
//      data structure: vectors, strings
//      algorithm: none

#include<bits/stdc++.h>
class Solution {
public:
    int minLength(string s) {
        stack<int> st;
        for(char curr: s){
            if(st.empty())st.push(curr);
            else if((curr=='B'&&st.top()=='A')||(curr=='D'&&st.top()=='C')) st.pop();
            else st.push(curr);
        }
        return st.size();
    }
};