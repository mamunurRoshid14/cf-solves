//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
ll T;
vector<ll>ad[200000];
ll st[200000],ed[200000];
ll aa[200000];
struct ST {
#define lc (n << 1)
#define rc ((n << 1) | 1)
    set<int>v[2000000];
    ST() {
 
    }
    inline int combine(int a, int b) {
        return (a||b); //merge left and right queries
    }
    inline void pull(int n) {
        v[n].clear();
        for(auto ii:v[lc]) {
            v[n].insert(ii);
        }
        for(auto ii:v[rc]) {
            v[n].insert(ii);
        } //merge lower nodes of the tree to get the parent node
    }
    void build(int n, int b, int e) {
        if(b == e) {
            v[n].clear();
            v[n].insert(st[aa[b]]);
            return;
        }
        int mid = (b + e) >> 1;
        build(lc, b, mid);
        build(rc, mid + 1, e);
        pull(n);
    }
 
    int query(int n, int b, int e, int i, int j,int S,int D) {   //quer(1,1,n,l,r)  call in this way
        if(i > e || b > j) return 0;
        if(i <= b && e <= j) {
            if(v[n].lower_bound(S)!=v[n].end()&&(*v[n].lower_bound(S))<=D) return 1;
            else return 0;
        }
        int mid = (b + e) >> 1;
        return combine(query(lc, b, mid, i, j,S,D), query(rc, mid + 1, e, i, j,S,D));
    }
} t;
 
 
void dfs(ll s,ll p) {
    st[s]=++T;
    for(auto ii:ad[s]) {
        if(ii!=p) {
            dfs(ii,s);
        }
    }
    ed[s]=T;
}
void solve() {
    T=0;
    ll n,q,i,j;
    cin>>n>>q;
    for(i=1; i<=n; i++) {
        ad[i].clear();
        st[i]=0;
        ed[i]=0;
    }
    for(i=1; i<n; i++) {
        ll u,v;
        cin>>u>>v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    for(i=1; i<=n; i++) {
        cin>>aa[i];
    }
    dfs(1,0);
    t.build(1,1,n);
    while(q--){
        ll l,r,x; cin>>l>>r>>x;
        if(t.query(1,1,n,l,r,st[x],ed[x]))cout<<"YES\n";
        else cout<<"NO\n";
    }
    cout<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1899/problem/G