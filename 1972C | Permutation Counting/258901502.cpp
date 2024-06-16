//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define LL_INF (1LL << 62)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
void solve()
{
    //First, confirm your idea with pen and paper.
    ll n,k,i,j;
    cin>>n>>k;
    ll aa[n+1];
    for(i=1; i<=n; i++)cin>>aa[i];
    ll l=1,r=15372286728091LL;
    ll mx=0;
    ll ss=0;
    while(l<=r)
    {
        ll m=(l+r)/2;
        ll s=0;
        for(i=1; i<=n; i++)
        {
            if(aa[i]<m)
            {
                s+=m-aa[i];
            }
        }
        if(s<=k)
        {
            l=m+1;
            mx=m;
            ss=s;
        }
        else
        {
            r=m-1;
        }
    }
    vector<ll>vv;
    k-=ss;
    for(i=1; i<=n; i++)
    {
        if(aa[i]<=mx)
        {
            aa[i]=mx;
            if(k)
            {
                ++aa[i];
                k--;
            }
        }
    }
 
    for(i=1; i<=n; i++)
    {
        if(aa[i]>mx)
        {
            vv.push_back(i);
        }
    }
    ll len=mx*n+(ll)vv.size();
    ll an=len-n+1;
    cout<<an<<"\n";
    return;
}
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1; it<=t; it++)
    {
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1972/problem/C