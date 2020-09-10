#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>p;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        p.push_back(x);
    }
    sort(p.begin(),p.end());
    int sum=0;
    for(int i=0;i<k;i++)
    {
        sum+=p[i];
    }
    cout<<sum<<endl;
    return 0;
}

