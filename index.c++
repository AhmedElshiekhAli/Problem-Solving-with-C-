#include <iostream>
#include <algorithm>
using namespace std;
//link the problem on the codeforse
// https://codeforces.com/group/E3LUlivnjX/contest/573280/submission/296486440
int main()
{
    int x;
    cin >> x;
    int y;
    for (int i = 0; i < x; i++)
    {
        cin >> y;
        if (y >= 1900)
        {
            cout << "Division 1\n";
        }

        else if (1600 <= y && y <= 1899)
        {
            cout << "Division 2\n";
        }
        else if (1400 <= y && y <= 1599)
        {
            cout << "Division 3\n";
        }
        else
        {
            cout << "Division 4\n";
        }
    }
}