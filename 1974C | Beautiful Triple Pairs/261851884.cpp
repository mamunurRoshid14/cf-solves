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
#define mod 998244353
void solve() {
    ll n,i,j;cin>>n;
    ll aa[n+3];
    for(i=1;i<=n;i++)cin>>aa[i];
    map<pair<ll,pair<ll,ll>>,ll>mp;
    for(i=1;i+2<=n;i++){
        mp[{aa[i],{aa[i+1],aa[i+2]}}]++;
    }
    ll an=0;
    for(auto ii:mp){
        ll c=(ii.ss*(ii.ss-1))/2;
        an-=3LL*c;
    }
    map<pair<ll,ll>,ll>mpp;
    for(i=1;i+2<=n;i++){
        mpp[{aa[i],aa[i+1]}]++;
    }
    for(auto ii:mpp){
        ll c=(ii.ss*(ii.ss-1))/2;
        an+=c;
    }
    mpp.clear();
    for(i=1;i+2<=n;i++){
        mpp[{aa[i],aa[i+2]}]++;
    }
    for(auto ii:mpp){
        ll c=(ii.ss*(ii.ss-1))/2;
        an+=c;
    }
    mpp.clear();
    for(i=1;i+2<=n;i++){
        mpp[{aa[i+1],aa[i+2]}]++;
    }
    for(auto ii:mpp){
        ll c=(ii.ss*(ii.ss-1))/2;
        an+=c;
    }
    mpp.clear();
    cout<<an<<"\n";
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
                //Link: https://codeforces.com/contest/1974/problem/C