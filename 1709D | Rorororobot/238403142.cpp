//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define CC(x) cout << "Case " << ++x << ":";
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 200006
 
int t[N][18], a[N];
void build(int n) {
  for(int i = 1; i <= n; ++i) t[i][0] = a[i];
  for(int k = 1; k < 18; ++k) {
    for(int i = 1; i + (1 << k) - 1 <= n; ++i) {
      t[i][k] = max(t[i][k - 1], t[i + (1 << (k - 1))][k - 1]);
    }
  }
}
 
int query(int l, int r) {
  int k = 31 - __builtin_clz(r - l + 1);
  return max(t[l][k], t[r - (1 << k) + 1][k]);
}
 
void solve() {
    //First, confirm your idea with pen and paper.
    ll n,m,i,j; cin>>n>>m;
    for(i=1;i<=m;i++)cin>>a[i];
    build(m); ll q; cin>>q;
    while(q--){
        ll x1,y1,x2,y2,k; cin>>x1>>y1>>x2>>y2>>k;
        bool f=1;
        if(a[y1]>=x1)f=0;
        if(a[y2]>=x2)f=0;
        if(abs(y1-y2)%k)f=0;
        if(abs(x1-x2)%k)f=0;
        if(y1>y2)swap(y1,y2);
        ll mx=query(y1,y2);
        if(x1<=mx){
            ll tm=(mx-x1+k)/k;
            x1+=tm*k;
            if(x1>n)f=0;
        }
        if(f)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return;
}
 
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt=1;
    //cin >> tt;
    for(int it=1; it<=tt; it++) {
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1709/problem/D