#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 10000000
int main()
{
    int d, t, s;
    cin >> d >> t >> s;
    if (d <= (t * s))
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}