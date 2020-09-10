#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int n,q,sum=0;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
        sum+=x;
    }
    cin>>q;
    while(q--)
    {
        int x,y;
        cin>>x>>y;
        int c=count(v.begin(),v.end(),x);
        while(c--)
        {
            replace(v.begin(),v.end(),x,y);
            if(x<y)
                sum+=(y-x);
            else
                sum-=(x-y);
        }
//        for(int i=0; i<v.size(); i++)
//        {
//            sum+=v[i];
//        }
        cout<<sum<<endl;

    }

    return 0;
}

