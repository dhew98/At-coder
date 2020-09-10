#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
bool check_bit(ll n, int i)
{
    return n & (1LL << i);
}
int main()
{
    int n;
    cin >> n;
    ll a[n + 5] = {0};
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 64; i++)
    {
        int x = 0, y = 0;
        for (int j = 0; j < n; j++)
        {
            if (check_bit(a[j], i))
                x++;
        }
        ll p = (x * (n - x)) % mod;
        ll ans = ((1LL << i) % mod * p % mod) % mod;
        sum = (sum + ans) % mod;
    }
    cout << sum << endl;
    return 0;
}
