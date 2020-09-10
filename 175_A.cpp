#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    string s;
    cin >> s;
    int c = 0, m = -1;
    for (int i = 0; i < 3; i++)
    {
        if (s[i] == 'R')
            c++;
        else
        {
            c = 0;
        }
        m = max(m, c);
    }
    cout << m << endl;
}