//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define CC(x) cout << "Case " << ++x << ":";
#define nn "\n"
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 1000006
vector<ll>ad[N];
void solve(){
    ll n,i,j; cin>>n;
    for(i=1;i<=n;i++)ad[i].clear();
    for(i=1;i<n;i++){
        ll u,v; cin>>u>>v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    ll an=0;
    for(i=1;i<=n;i++){
       if(ad[i].size()==1)an++;
    }
    cout<<(an+1)/2<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1;it<=t;it++){
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1905/problem/B