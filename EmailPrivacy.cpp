#include <bits/stdc++.h>
using namespace std;
string privacy(string email)
{
    int length;
    string finalAns = "";
    for (int i = 0; i < email.length(); i++)
    {
        if (email.at(i) == '@')
            length = i;
    }
    if (length < email.length())
    {
        string str = "";
        for (int l = 3; l < length; l++)
        {
            str = str + "*";
        }
        email.replace(3, (length - 3), str);
        finalAns = email;
    }
    else
    {
        finalAns = "Sorry, Invalid String Found!";
    }
    return finalAns;
}
int main()
{
    string str;
    cin >> str;
    cout << privacy(str) << endl;
    return 0;
}
