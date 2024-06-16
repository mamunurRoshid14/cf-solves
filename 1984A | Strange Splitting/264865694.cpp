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
    ll n,i,j; cin>>n;
    ll aa[n];
    for(i=0;i<n;i++){
        cin>>aa[i];
    }
    if(aa[0]==aa[n-1]){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    cout<<"RB";
    for(i=2;i<n;i++){
        cout<<"R";
    }
    cout<<"\n";
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
                //Link: https://codeforces.com/contest/1984/problem/A