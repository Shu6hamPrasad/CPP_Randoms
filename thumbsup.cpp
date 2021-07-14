#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r;
    cout << "Enter a number divisible by 3: ";
    cin >> r;
    for (int i = 1; i < (4 * r / 3 + 1); i++)
    {
        for (int j = 1; j <= r + 1; j++)
        {
            if (i <= r / 3 && j > (r / 3 + 1) && j <= 2 * r / 3 + 1)
            {
                if (j <= ((2 * r / 3) + 1 - i))
                    cout << ""
                         << " ";
                else
                    cout << "*"
                         << " ";
            }
            else if (i <= r / 3)
                cout << ""
                     << " ";
            else if (j == r / 3 + 1)
                cout << ""
                     << " ";
            else
                cout << "*"
                     << " ";
        }
        cout << endl;
    }
    return 0;
}
