//      https://leetcode.com/problems/isomorphic-strings/?envType=daily-question&envId=2024-04-02
//      DS: unordered_map
//      Algo: none
#include<string>
#include<unordered_map>
#include <iostream>
using namespace std;
int main(){
    string a, b;
    cin>>a>>b;
    unordered_map<char, char> a2b;
    unordered_map<char, char> b2a;
    for(int i=0;i<a.length();i++){
        char ca=a[i];
        char cb=b[i];
        if(a2b[ca]==NULL && b2a[cb]==NULL){
            a2b[ca]=cb;
            b2a[cb]=ca;
        }
        else if(a2b[ca]!=cb || b2a[cb]!=ca){
            cout<<"false";
            return 0;
        }
    }
    cout<<"true";
    return 0;
}