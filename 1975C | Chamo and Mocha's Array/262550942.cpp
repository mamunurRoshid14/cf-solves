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
void solve() {
    ll n,i,j; cin>>n;
    ll aa[n+3];
    for(i=0;i<n;i++)cin>>aa[i];
    ll an=0;
    for(i=1;i<n;i++){
        ll c=min(aa[i],aa[i-1]);
        an=max(an,c);
    }
    for(i=2;i<n;i++){
        vector<ll>v;
        v.push_back(aa[i]);
        v.push_back(aa[i-1]);
        v.push_back(aa[i-2]);
        sort(v.begin(),v.end());
        ll c=v[1];
        an=max(an,c);
    }
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
                //Link: https://codeforces.com/contest/1975/problem/C