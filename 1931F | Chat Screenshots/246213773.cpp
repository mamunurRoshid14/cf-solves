//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
#define ll int
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define LL_INF (1LL << 62)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
 
struct SCC{
    vector <vector<int>> adj, r_adj;
    int V, cnt;
    vector<int> visit, color;
    stack <int> stk;
 
    SCC(int V) : V(V), cnt(0) {
        adj.resize(V+1);
        r_adj.resize(V+1);
        visit.resize(V+1,0);
        color.resize(V+1);
        cnt=0;
    }
 
    void add_edge(int x, int y) {
        adj[x].push_back(y);
        r_adj[y].push_back(x);
    }
 
    void dfs(int u) {
        visit[u] = true;
        for(int v: adj[u]) if(!visit[v]) {
            dfs(v);
        }
        stk.push(u);
    }
 
    void dfs(int u, int id) {
        visit[u] = false; color[u] = id;
        for(int v: r_adj[u]) if(visit[v]) {
            dfs(v, id);
        }
    }
 
 
    int get() {
        for(int i = 1; i <= V; i++) if(!visit[i]) {
            dfs(i);
        }
        while(stk.size()) {
            int v = stk.top(); stk.pop();
            if(visit[v]) {
                dfs(v, ++cnt);
            }
        }
        return cnt;
    }
};
 
 
 
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,k,i,j; cin>>n>>k;
    SCC scc=SCC(n);
    for(j=0;j<k;j++){
        ll aa[n];
        for(i=0;i<n;i++){
            cin>>aa[i];
            if(i>1){
                scc.add_edge(aa[i-1],aa[i]);
            }
        }
    }
    ll f=scc.get();
    if(f==n){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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
                //Link: https://codeforces.com/contest/1931/problem/F