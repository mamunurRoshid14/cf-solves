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
    ll n,i,j; cin>>n;
    ll aa[n+2];for(i=0;i<n;i++)cin>>aa[i];
    deque<ll>qq;
    for(i=0;i<n;i++)qq.push_back(aa[i]);
    ll nn=n+10;
    while(nn--){
        ll a=qq.back();
        qq.pop_back();
        qq.push_front(a);
        i=0;
        for(auto ii:qq){
            aa[i]=ii;
            i++;
        }
        bool f=1;
        for(i=1;i<n;i++){
            if(aa[i]<aa[i-1])f=0;
        }
        if(f){
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
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
                //Link: https://codeforces.com/contest/1975/problem/A