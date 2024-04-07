//      https://leetcode.com/problems/make-the-string-great/description/?envType=daily-question&envId=2024-04-07
//      Data Structure: vectors, stacks
//      Algorithm: none

#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int main(){
    string s; stack<char> st;
    cin>>s;
    for(char c: s){
        if(st.empty()){st.push(c);}
        else if(abs(st.top()-c)==32)st.pop();
        else st.push(c);
    }
    string ans="";
    while(st.size()){
        ans=st.top()+ans;
        st.pop();
    }
    cout<<ans;
    return 0;
}