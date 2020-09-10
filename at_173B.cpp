#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000
int main()
{
    int t, a[10] = {0};
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s[0] == 'A')
            a[0]++;
        else if (s[0] == 'W')
            a[1]++;
        else if (s[0] == 'T')
            a[2]++;
        else
        {
            a[3]++;
        }
    }
    cout << "AC x " << a[0] << endl;
    cout << "WA x " << a[1] << endl;
    cout << "TLE x " << a[2] << endl;
    cout << "RE x " << a[3] << endl;
    return 0;
}
