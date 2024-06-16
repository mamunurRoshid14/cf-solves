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
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,m,i,j; cin>>n>>m;
    ll aa[n+2],bb[n+2];
    for(i=1;i<=n;i++)cin>>aa[i];
    for(i=1;i<=n;i++)cin>>bb[i];
 
    ll an=0;
    for(i=n;i>m;i--){
        an+=min(aa[i],bb[i]);
    }
    ll ans=LLONG_MAX;;
    for(i=m;i>0;i--){
        ans=min(an+aa[i],ans);
        an+=min(aa[i],bb[i]);
    }
    cout<<ans<<"\n";
 
    return;
}
int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1;it<=t;it++){
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1945/problem/D