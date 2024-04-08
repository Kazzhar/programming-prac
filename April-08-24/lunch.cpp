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
    for (int i = 0; i < n; i++)
        cin >> students[i];
    cout << endl;
    for (int i = 0; i < n; i++)
        cin >> food[i];

    int ans = students.size();
    for (int i = 0; i < food.size(); i++)
    {
        bool present = false;
        for (int j = 0; j < students.size(); j++)
        {
            if (students[j] == food[i])
            {
                students[j] = -1;
                ans--;
                present = true;
                break;
            }
        }
        if (!present)
        {
            cout << ans;
            return 0;
        }
    }
    cout << "0";
    return 0;
}