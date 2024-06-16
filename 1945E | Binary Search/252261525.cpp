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
    //First, confirm your idea with pen and paper.
    ll n,i,j,x;
    cin>>n>>x;
    ll aa[n+3];
    ll in;
    for(i=1; i<=n; i++) {
        cin>>aa[i];
        if(aa[i]==x) {
            in=i;
        }
    }
    vector<pll>vv;
    ll l=1,r=n+1;
    while(r-l>1) {
        ll m=(l+r)/2;
        if(aa[m]<=x) {
            l=m;
 
        } else {
            r=m;
        }
    }
    vv.push_back({l,in});
    swap(aa[l],aa[in]);
    for(i=1; i<=n; i++) {
        if(aa[i]==x) {
            in=i;
        }
    }
    l=1,r=n+1;
    while(r-l>1) {
        ll m=(l+r)/2;
        if(aa[m]<=x) {
            l=m;
 
        } else {
            r=m;
        }
    }
    vv.push_back({l,in});
    cout<<vv.size()<<"\n";
    for(auto ii:vv)cout<<ii.ff<<" "<<ii.ss<<"\n";
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
                //Link: https://codeforces.com/contest/1945/problem/E