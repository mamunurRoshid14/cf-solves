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
map<ll,ll>mp;
void solve() {
    //First, confirm your idea with pen and paper.
    ll x;
    cin>>x;
    auto ii=mp.lower_bound(x);
    ll an=INT_MAX;
    if(ii->ff-x==0) {
        an=ii->ss;
    } else if(ii->ff-x<ii->ss) {
        an=ii->ss+1;
    } else {
        an=ii->ss+2;
    }
    if(ii!=mp.begin()) {
        --ii;
        if(ii->ff-x==0) {
            an=min(an,ii->ss);
        } else if(x-ii->ff<ii->ss) {
            an=min(an,ii->ss+1);
        } else {
            an=min(an,ii->ss+2);
        }
    }
    cout<<an<<"\n";
    return;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    for(ll i=1,j=1; j<=1000000;) {
        mp[j]=i;
        i++;
        j+=i;
    }
    cin >> t;
    for(int it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1455/problem/B