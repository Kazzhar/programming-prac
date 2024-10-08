//      https://leetcode.com/problems/minimum-string-length-after-removing-substrings/solutions/5880024/sc-o-n-o-1-stack-vs-in-place-approach-explained/
//      topic: strings, stacks, pointers
//      data structure: vectors, strings
//      algorithm: none

#include<bits/stdc++.h>
class Solution {
public:
    int minLength(string s) {
        int len;
        do{
        len=s.length();
        string tmp;
        for(int i=0;i<len;i++){
            if(i>0){
                int flag=0;
                if(s[i]=='B' && s[i-1]=='A'){
                    tmp.erase(tmp.length()-1,1);
                    flag=1;
                }
                else if(s[i]=='D' && s[i-1]=='C'){
                    tmp.erase(tmp.length()-1,1);
                    flag=1;
                }
                if(flag==1) continue;
            }
            tmp=tmp+s[i];
        }
        s=tmp;
        }while(len!=s.length());
        return s.length();
    }
};