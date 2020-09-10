#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define max 1000000
int main()
{
    int n;
    cin >> n;
    if (n % 1000 == 0)
        cout << 0 << endl;
    else
    {
        int x = (n / 1000) + 1;
        int ans = (x * 1000) - n;
        cout << ans << endl;
    }

    return 0;
}
