//      https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/description/?envType=daily-question&envId=2024-04-07
//      Data Structure: vectors
//      Algorithm: none

#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s;
    cin>>s;
    int currMax, ans;
    currMax=ans=0;
    for(auto c: s){
        if(c=='(')
            ans=max(ans, ++currMax);
        else
            --currMax;
    }
    return 0;
}