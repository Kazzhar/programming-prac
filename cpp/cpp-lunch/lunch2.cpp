//      https://leetcode.com/problems/number-of-students-unable-to-eat-lunch/description/?envType=daily-question&envId=2024-04-08
//      Data Structure: vectors
//      Algorithm: none

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> students(n);
    vector<int> food(n);
    int food0, food1;
    food0=food1=0;
    for (int i = 0; i < n; i++)
        cin >> students[i];
    cout << endl;
    for (int i = 0; i < n; i++)
       { cin >> food[i];
       if(food[i]==0)food0++;
       else food1++;
       }

    return 0;
}