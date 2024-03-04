#include <bits/stdc++.h>
using namespace std;

int main()
{

    int rows;

    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        int spaces = rows - i;

        for (int j = 0; j < spaces; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "* ";
        }

        cout << endl;
    }

    return 0;
}