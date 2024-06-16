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
ll aa[200005];
ll dp[200005][2];
ll n;
ll f(ll pos, ll op){
    if(pos<1)return 0;
    if(dp[pos][op]!=LL_INF)return dp[pos][op];
    if(op==0){
        ll a=f(pos-1,0)+aa[pos];
        ll b=f(pos-1,1)+aa[pos];
        return dp[pos][op]=min(a,b);
    }
    else{
        ll a=abs(f(pos-1,0)+aa[pos]);
        ll b=abs(f(pos-1,1)+aa[pos]);
        return dp[pos][op]=max(a,b);
    }
}
 
void solve(){
    cin>>n;
    ll i,j;
    for(i=1;i<=n;i++){
        cin>>aa[i];
        dp[i][0]=LL_INF;
        dp[i][1]=LL_INF;
    }
    ll a=abs(f(n,0));
    ll b=f(n,1);
    cout<<max(a,b)<<"\n";
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
                //Link: https://codeforces.com/contest/1984/problem/C1