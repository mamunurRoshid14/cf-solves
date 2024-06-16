//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
#define ll int
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define LL_INF (1LL << 62)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
void solve() {
    //First, confirm your idea with pen and paper.
    ll n,i,m=0;
    cin>>n;
    ll aa[n]; for(i=0;i<n;i++)cin>>aa[i];
    ll mex=n;
    vector<ll>v;
    for(i=n-1;i>=0;i--){
        ll c=mex-aa[i];
        mex=min(mex,c);
        v.push_back(c);
 
    }
    for(i=n-1;i>=0;i--)cout<<v[i]<<" ";
    cout<<"\n";
    return;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1942/problem/B