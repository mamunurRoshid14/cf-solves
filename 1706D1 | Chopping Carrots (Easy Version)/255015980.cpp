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
    ll n,k,i,j;
    cin>>n>>k;
    ll aa[n];
    for(i=0; i<n; i++)cin>>aa[i];
    ll an=INT_MAX;
    for(i=0;i<=aa[0];i++){
        ll mx=0;
        for(j=0;j<n;j++){
            ll l=1,r=k;
            ll c=INT_MAX;
            while(l<=r){
                ll m=(l+r)/2;
                if(aa[j]/m>=i){
                    c=min(c,aa[j]/m);
                    l=m+1;
                }
                else{
                    r=m-1;
                }
            }
            mx=max(mx,c);
        }
        an=min(an,mx-i);
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
                //Link: https://codeforces.com/contest/1706/problem/D1