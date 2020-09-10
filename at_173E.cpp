#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define unsigned int u
#define max 1000000
int main()
{
    vector<int> a;
    for (int i = 0; i <= 5; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i <= 5; i++)
    {
        cout << a[i];
    }

    return 0;
}
