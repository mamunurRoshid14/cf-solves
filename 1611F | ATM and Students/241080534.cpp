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
 
const int N = 2e5 + 9, LG = 18, inf = 1e17 + 9;
 
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
        t[n] = t[n] + lazy[n];
        if(b != e) {
            lazy[lc] = lazy[lc] + lazy[n];
            lazy[rc] = lazy[rc] + lazy[n];
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
    int query(int n, int b, int e, int i, int j) {   //quer(1,1,n,l,r)  call in this way
        push(n, b, e);
        if(i > e || b > j) return inf;
        if(i <= b && e <= j) return t[n];
        int mid = (b + e) >> 1;
        return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
    }
} t;
 
void solve(){
    ll n,m,i,j; cin>>n>>m;
    t.build(1,1,n); ll s=0;
    ll aa[n+3]; for(i=1;i<=n;i++){
        cin>>aa[i]; s+=aa[i];
        t.upd(1,1,n,i,i,s);
    }
    ll L=-1,R=-2;
    for(i=1;i<=n;i++){
        ll l=i,r=n;
        ll ss=i-2*n;
        while(l<=r){
            ll mm=(l+r)/2;
            ll tm=t.query(1,1,n,i,mm);
            if(tm+m>=0){
                l=mm+1;
                ss=mm;
            }
            else{
                r=mm-1;
            }
        }
        //cout<<i<<"  "<<ss<<"\n";
        if(ss-i>=R-L){
            L=i,R=ss;
        }
        t.upd(1,1,n,i,n,-aa[i]);
    }
    if(L==-1)cout<<"-1\n";
    else cout<<L<<" "<<R<<"\n";
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
                //Link: https://codeforces.com/contest/1611/problem/F