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
ll lca(ll a,ll b){
    while(1){
        if(a==b){
            return a;
        }
        if(a>b)a/=2;
        else b/=2;
    }
}
void solve(){
    //First, confirm your idea with pen and paper.
    ll q; cin>>q;
    map<pll,ll>mp;
    while(q--){
        ll t; cin>>t;
        if(t==1){
            ll u,v,w; cin>>u>>v>>w;
            ll lc=lca(u,v);
            while(u!=lc){
                ll p=u/2;
                mp[{p,u}]+=w;
                u/=2;
            }
            while(v!=lc){
                ll p=v/2;
                mp[{p,v}]+=w;
                v/=2;
            }
        }
        else{
            ll u,v; cin>>u>>v;
            ll lc=lca(u,v);
            ll an=0;
            while(u!=lc){
                ll p=u/2;
                an+=mp[{p,u}];
                u/=2;
            }
            while(v!=lc){
                ll p=v/2;
                an+=mp[{p,v}];
                v/=2;
            }
            cout<<an<<"\n";
        }
    }
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    //cin >> t;
    for(int it=1;it<=t;it++){
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/696/problem/A