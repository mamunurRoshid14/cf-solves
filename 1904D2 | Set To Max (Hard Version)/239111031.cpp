//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int long long
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
 
struct ST {
#define lc (n << 1)
#define rc ((n << 1) | 1)
    int t[4 * N], lazy[4 * N];
    ST() {
        fill(t, t + 4 * N, 0);
        fill(lazy, lazy + 4 * N, 0);
    }
    inline void push(int n, int b, int e) {
        if(lazy[n] == 0) return;
        t[n] =  lazy[n];
        if(b != e) {
            lazy[lc] = lazy[n];
            lazy[rc] = lazy[n];
        }
        lazy[n] = 0;
    }
    inline int combine(int a, int b) {
        return max(a, b); //merge left and right queries
    }
    inline void pull(int n) {
        t[n] = max(t[lc], t[rc]); //merge lower nodes of the tree to get the parent node
    }
    void build(int n, int b, int e) {
        if(b == e) {
            t[n] = 0;
            lazy[n]=0;
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
            lazy[n] = v;
            push(n, b, e);
            return;
        }
        int mid = (b + e) >> 1;
        upd(lc, b, mid, i, j, v);
        upd(rc, mid + 1, e, i, j, v);
        pull(n);
    }
    int query(int n, int b, int e, int i, int j) {   //quer(1,1,n,l,r)  call in this way
        push(n, b, e);
        if(i > e || b > j) return -INF;
        if(i <= b && e <= j) return t[n];
        int mid = (b + e) >> 1;
        return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
    }
} t1;
 
struct ST2 {
#define lc (n << 1)
#define rc ((n << 1) | 1)
    int t[4 * N], lazy[4 * N];
    ST2() {
        fill(t, t + 4 * N, 0);
        fill(lazy, lazy + 4 * N, 0);
    }
    inline void push(int n, int b, int e) {
        if(lazy[n] == 0) return;
        t[n] =  lazy[n];
        if(b != e) {
            lazy[lc] = lazy[n];
            lazy[rc] = lazy[n];
        }
        lazy[n] = 0;
    }
    inline int combine(int a, int b) {
        return min(a, b); //merge left and right queries
    }
    inline void pull(int n) {
        t[n] = min(t[lc], t[rc]); //merge lower nodes of the tree to get the parent node
    }
    void build(int n, int b, int e) {
        if(b == e) {
            t[n] = 0;
            lazy[n]=0;
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
            lazy[n] = v;
            push(n, b, e);
            return;
        }
        int mid = (b + e) >> 1;
        upd(lc, b, mid, i, j, v);
        upd(rc, mid + 1, e, i, j, v);
        pull(n);
    }
    int query(int n, int b, int e, int i, int j) {   //quer(1,1,n,l,r)  call in this way
        push(n, b, e);
        if(i > e || b > j) return INF;
        if(i <= b && e <= j) return t[n];
        int mid = (b + e) >> 1;
        return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
    }
} t2;
 
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,m,i,j; cin>>n;
    t1.build(1,1,n);
    t2.build(1,1,n);
    ll aa[n],bb[n];
    for(i=0;i<n;i++)cin>>aa[i];
    for(i=0;i<n;i++)cin>>bb[i];
    map<ll,set<ll>>mp1;
    map<ll,set<ll,greater<ll>>>mp2;
    for(i=0;i<n;i++){
        if(aa[i]>bb[i]){
            cout<<"No\n";
            return;
        }
        t1.upd(1,1,n,i+1,i+1,aa[i]);
        t2.upd(1,1,n,i+1,i+1,bb[i]);
        mp1[aa[i]].insert(i+1);
        mp2[aa[i]].insert(i+1);
    }
    bool f=1;
    for(i=0;i<n;i++){
        ll cn=0;
        ll l=n;
        if(mp2[bb[i]].lower_bound(i+1)!=mp2[bb[i]].end()){
            l=*mp2[bb[i]].lower_bound(i+1);
        }
        ll r=-1;
        if(mp1[bb[i]].lower_bound(i+1)!=mp1[bb[i]].end()){
            r=*mp1[bb[i]].lower_bound(i+1);
        }
        if(l!=n&&t1.query(1,1,n,l,i+1)<=bb[i]&&t2.query(1,1,n,l,i+1)>=bb[i])cn++;
        if(r!=-1&&t1.query(1,1,n,i+1,r)<=bb[i]&&t2.query(1,1,n,i+1,r)>=bb[i])cn++;
        if(!cn)f=0;
    }
    if(f){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
    return;
}
 
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1;it<=t;it++){
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1904/problem/D2