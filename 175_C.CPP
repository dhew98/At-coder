#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    ll x, k, d, m = INT_MAX;
    cin >> x >> k >> d;
    x = abs(x);
    ll y = x / d;
    if (y >= k)
    {
        x -= (k * d);
        cout << x << endl;
        return 0;
    }
    x -= y * d;
    k -= y;
    if (k % 2 == 0)
    {
        cout << x << endl;
    }
    else
    {
        cout << abs(min(x + d, x - d)) << endl;
    }
    return 0;
}