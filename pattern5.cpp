#include <bits/stdc++.h>
using namespace std;

int main()
{
    int rows;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << (char)('A' + j) << " ";
        }
        cout << endl;
    }

    return 0;
}