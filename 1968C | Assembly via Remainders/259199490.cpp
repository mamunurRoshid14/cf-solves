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
    //First, confirm your idea with pen and paper.
    ll n,i,j; cin>>n;
    ll aa[n+4];
    for(i=2;i<=n;i++)cin>>aa[i];
    ll xx[n+2];
    xx[1]=505;
    for(i=2;i<=n;i++){
        xx[i]=xx[i-1]+aa[i];
    }
    for(i=1;i<=n;i++){
        cout<<xx[i]<<" ";
        if(i>1){
            if(xx[i]%xx[i-1]!=aa[i]){
                cout<<"F\n";
            }
        }
    }
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
                //Link: https://codeforces.com/contest/1968/problem/C