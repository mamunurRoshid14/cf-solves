//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int long long
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define CC(x) cout << "Case " << ++x << ":";
ll inf (1LL << 60);
 
const int N = 1e5 + 9, LG = 18;
 
struct ST {
#define lc (n << 1)
#define rc ((n << 1) | 1)
    vector<pll> t;
    ll lazy[4 * N];
    ST() {
        t.resize(4*N);
        fill(lazy, lazy + 4 * N, 0);
    }
    inline void push(int n, int b, int e) {
        if(lazy[n] == 0) return;
        t[n].ff = t[n].ff + lazy[n];
        if(b != e) {
            lazy[lc] = lazy[lc] + lazy[n];
            lazy[rc] = lazy[rc] + lazy[n];
        }
        lazy[n] = 0;
    }
    inline pll combine(pll a, pll b) {
        return min(a, b); //merge left and right queries
    }
    inline void pull(int n) {
        t[n] = min(t[lc], t[rc]); //merge lower nodes of the tree to get the parent node
    }
    void build(int n, int b, int e) {
        if(b == e) {
            t[n].ff= 0;
            t[n].ss=b;
            return;
        }
        int mid = (b + e) >> 1;
        build(lc, b, mid);
        build(rc, mid + 1, e);
        pull(n);
    }
    void upd(int n, int b, int e, int i, int j, int v) { //upd(1,1,n,l,r,val) call in this way
        push(n, b, e);
        if(j < b || e < i) return;
        if(i <= b && e <= j) {
            lazy[n] += v;
            push(n, b, e);
            return;
        }
        int mid = (b + e) >> 1;
        upd(lc, b, mid, i, j, v);
        upd(rc, mid + 1, e, i, j, v);
        pull(n);
    }
    pll query(int n, int b, int e, int i, int j) {   //query(1,1,n,l,r)  call in this way
        push(n, b, e);
        if(i > e || b > j) return {inf,inf};
        if(i <= b && e <= j) return t[n];
        int mid = (b + e) >> 1;
        return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
    }
} t;
 
vector<int> g[N];
int par[N][LG + 1], dep[N], sz[N];
void dfs(int u, int p = 0) {
    par[u][0] = p;
    dep[u] = dep[p] + 1;
    sz[u] = 1;
    for (int i = 1; i <= LG; i++) par[u][i] = par[par[u][i - 1]][i - 1];
    if (p) g[u].erase(find(g[u].begin(), g[u].end(), p));
    for (auto &v : g[u]) if (v != p) {
            dfs(v, u);
            sz[u] += sz[v];
            if(sz[v] > sz[g[u][0]]) swap(v, g[u][0]);
        }
}
int lca(int u, int v) {
    if (dep[u] < dep[v]) swap(u, v);
    for (int k = LG; k >= 0; k--) if (dep[par[u][k]] >= dep[v]) u = par[u][k];
    if (u == v) return u;
    for (int k = LG; k >= 0; k--) if (par[u][k] != par[v][k]) u = par[u][k], v = par[v][k];
    return par[u][0];
}
int kth(int u, int k) {
    assert(k >= 0);
    for (int i = 0; i <= LG; i++) if (k & (1 << i)) u = par[u][i];
    return u;
}
int T, head[N], st[N], en[N];
void dfs_hld(int u) {
    st[u] = ++T;
    for (auto v : g[u]) {
        head[v] = (v == g[u][0] ? head[u] : v);
        dfs_hld(v);
    }
    en[u] = T;
}
int n;
pll query_up(int u, int v) {
    pll ans = {inf,inf};
    while(head[u] != head[v]) {
        ans = min(ans, t.query(1, 1, n, st[head[u]], st[u]));
        //cout<<"F "<<st[head[u]]<<" "<<st[u]<<"\n";
        u = par[head[u]][0];
    }
    ans = min(ans, t.query(1, 1, n, st[v], st[u]));
    //cout<<"F  "<<st[u]<<"  "<<st[v]<<"\n";
    return ans;
}
pll query(int u, int v) {
    int l = lca(u, v);
    pll ans = query_up(u, l);
    if (v != l) ans = min(ans, query_up(v, kth(v, dep[v] - dep[l] - 1)));
    return ans;
}
ll vv[N];
void calf(){
    for(ll i=1;i<=n;i++){
        vv[st[i]]=i;
    }
}
ll getv(ll s){
    return vv[s];
}
 
void solve() {
    //First, confirm your idea with pen and paper.
    ll m,q,i,j;
    cin>>n>>m>>q;
    for(i=1; i<n; i++) {
        ll u,v;
        cin>>u>>v;
        g[u].pb(v);
        g[v].pb(u);
    }
    vector<pll>girls[n+2];
    for(i=1; i<=n; i++) {
        girls[i].pb({inf,inf});
    }
    for(i=1; i<=m; i++) {
        ll v;
        cin>>v;
        girls[v].pb({i,i});
    }
    for(i=1; i<=n; i++) {
        sort(girls[i].rbegin(),girls[i].rend());
    }
    dfs(1);
    head[1]=1;
    dfs_hld(1);
    t.build(1,1,n);
    for(i=1; i<=n; i++) {
        t.upd(1,1,n,st[i],st[i],girls[i].back().ff);
    }
    calf();
//    for(i=1;i<=n;i++)cout<<st[i]<<" "<<en[i]<<"\n";cout<<"\n";
//    auto ii=query(2,5);
//   // auto iii=t.query(1,1,n,4,4);
//    cout<<ii.ff<<" "<<getv(ii.ss)<<"\n";
//   // cout<<iii.ff<<" "<<iii.ss<<"\n";
 
 
    while(q--){
        ll tt; cin>>tt;
        if(tt==1){
            ll u,v,k; cin>>u>>v>>k;
            vector<ll>an;
            while(k--){
                auto ii=query(u,v);
                if(ii.ff>(1LL<<55))break;
 
                ll s=getv(ii.ss);
                an.pb(girls[s].back().ss);
                t.upd(1,1,n,st[s],st[s],(-girls[s].back().ff));
                girls[s].pop_back();
                t.upd(1,1,n,st[s],st[s],girls[s].back().ff);
            }
            cout<<an.size()<<" ";
            for(auto ii:an)cout<<ii<<" ";cout<<"\n";
        }
        else{
            ll v,k; cin>>v>>k;
            t.upd(1,1,n,st[v],en[v],k);
        }
    }
    return;
}
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    //cin >> t;
    for(int it=1; it<=t; it++) {
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/696/problem/E