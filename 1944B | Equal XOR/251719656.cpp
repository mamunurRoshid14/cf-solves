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
    ll n,i,j,k;
    cin>>n>>k;
    k*=2;
    ll cn1[n+2];
    memset(cn1,0,sizeof cn1);
    ll cn2[n+2];
    memset(cn2,0,sizeof cn2);
    ll aa[2*n+3];
    for(i=1; i<=2*n; i++)cin>>aa[i];
    for(i=1; i<=n; i++) {
        cn1[aa[i]]++;
    }
    for(i=n+1; i<=2*n; i++) cn2[aa[i]]++;
    vector<ll>v1,v2;
    for(i=1; i<=n; i++) {
        if(cn1[i]==2&&v1.size()+2<=k) {
            v1.push_back(i);
            v1.push_back(i);
        }
        if(cn2[i]==2&&v2.size()+2<=k) {
            v2.push_back(i);
            v2.push_back(i);
        }
    }
 
    for(i=1; i<=n; i++) {
        if(v1.size()<k) {
            if(cn1[i]==1) {
                v1.push_back(i);
                v2.push_back(i);
            }
        }
    }
    for(auto ii:v1)cout<<ii<<" ";cout<<"\n";
    for(auto ii:v2)cout<<ii<<" ";cout<<"\n";
 
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
                //Link: https://codeforces.com/contest/1944/problem/B