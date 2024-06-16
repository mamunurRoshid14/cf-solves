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
ll add(ll b, ll c){
    if(LL_INF-b<c) return LL_INF+1;
    return b+c;
}
ll mul(ll b, ll c){
    if(LL_INF/b<c) return LL_INF+1;
    return b*c;
}
map<ll,ll,greater<ll>>mp;
void solve(){
    //First, confirm your idea with pen and paper.
    ll x; cin>>x;
    vector<ll>an;
    auto ii=*mp.lower_bound(x);
    for(ll i=0;i<ii.ss;i++)an.pb(i);
    x-=ii.ff;
    while(x){
        auto ii=*mp.lower_bound(x);
        an.pb(ii.ss);
        x-=ii.ff;
    }
    cout<<an.size()<<"\n";
    for(auto ii:an)cout<<ii<<" ";
    cout<<"\n";
    return;
}
 
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    ll num=1LL;
    for(ll i=0;i<62;i++){
        mp[num]=i; num*=2LL;
    }
 
    cin >> t;
    for(int it=1;it<=t;it++){
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1922/problem/E