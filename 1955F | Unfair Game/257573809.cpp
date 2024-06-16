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
ll dp[201][201][201];
void solve() {
    //First, confirm your idea with pen and paper.
    ll a,b,c,d; cin>>a>>b>>c>>d;
    cout<<(dp[a][b][c]+d/2)<<"\n";
    return;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(ll i=0;i<=200;i++){
        for(ll j=0;j<=200;j++){
            for(ll k=0;k<=200;k++){
                ll prev = 0;
                if (i) prev = max(prev, dp[i - 1][j][k]);
                if (j) prev = max(prev, dp[i][j - 1][k]);
                if (k) prev = max(prev, dp[i][j][k - 1]);
                dp[i][j][k] = prev;
 
                //dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],dp[i][j][k-1]));
                ll xr=((i&1)*1)^((j&1)*2)^((k&1)*3);
                if(xr==0&&(i||j||k))++dp[i][j][k];
            }
        }
    }
 
    int t=1;
    cin >> t;
    for(int it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1955/problem/F