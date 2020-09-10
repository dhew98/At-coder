#include <bits/stdc++.h>
using namespace std;
#define ll long long
main()
{
    int n, a[1000] = {0}, c = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (a[i] != a[j] && a[j] != a[k] && a[i] != a[k])
                {
                    int x[3] = {0};
                    x[0] = a[i];
                    x[1] = a[j];
                    x[2] = a[k];
                    sort(x, x + 3);
                    if (x[0] + x[1] > x[2])
                        c++;
                }
            }
        }
    }
    cout << c << endl;
}
