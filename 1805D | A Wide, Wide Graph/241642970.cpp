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
#define LL_INF (1LL << 61)
#define INF (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 100006
 
ll add(ll b, ll c) {
    if(LL_INF-b<c) return LL_INF+1;
    return b+c;
}
ll mul(ll b, ll c) {
    if(LL_INF/b<c) return LL_INF+1;
    return b*c;
}
vector<ll>ad[N];
ll dis[N];
ll dia1[N];
ll dia2[N];
ll mx,leaf1,leaf2;
void dfs(ll s,ll p,ll d,ll c) {
    dis[s]=d;
    if(mx<d&&c!=1) {
        leaf1=s;
        mx=d;
    }
    if(c==1) {
        dia1[s]=d;
        if(mx<d) {
            leaf2=s;
            mx=d;
        }
    }
    if(c==2) {
        dia2[s]=d;
    }
    for(auto ii:ad[s]) {
        if(ii!=p) {
            dfs(ii,s,d+1,c);
        }
    }
}
void solve() {
    //First, confirm your idea with pen and paper.
    ll n,i,j;
    cin>>n;
    for(i=1; i<=n; i++)ad[i].clear(),dis[i]=0,dia1[i]=0,dia2[i]=0;
    for(i=1; i<n; i++) {
        ll u,v;
        cin>>u>>v;
        ad[u].pb(v);
        ad[v].pb(u);
    }
    ll lea=1;
    for(i=1; i<=n; i++) {
        if(ad[i].size()==1) {
            lea=i;
            break;
        }
    }
    mx=-1;
    dfs(lea,0,0,0);
    mx=-1;
    dfs(leaf1,0,0,1);
    dfs(leaf2,0,0,2);
    vector<pll>v;
    for(i=1; i<=n; i++) {
        ll d=max(dia1[i],dia2[i]);
        v.pb({d,i});
    }
    sort(v.rbegin(),v.rend());
 
    vector<ll>an;
    ll cur=n+1;ll in=0;
    for(i=n;i>0;i--){
        while(in<n&&v[in].ff>=i&&cur>1){
            cur--; in++;
        }
        an.pb(min(n,cur));
    }
    reverse(an.begin(),an.end());
    for(auto ii:an)cout<<ii<<" ";
    cout<<"\n";
    return;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    //cin >> t;
    for(int it=1; it<=t; it++) {
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1805/problem/D