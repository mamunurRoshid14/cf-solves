//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int long long
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define LL_INF (1LL << 59)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 200005
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
ll aa[N];
vector<ll>ad[N];
ll T;
ll st[N],en[N];
ll as[N];
void dfs(ll s,ll p){
    T++;
    st[s]=T;
    as[s]=aa[s];
    for(auto ii:ad[s]){
        if(ii!=p){
            dfs(ii,s);
            as[s]+=as[ii];
        }
    }
    en[s]=T;
}
ll an;
void dfs2(ll s,ll p){
    vector<ll>vv;
    for(auto ii:ad[s]){
        if(ii!=p){
            vv.push_back(query(st[ii],en[ii]));
            dfs2(ii,s);
        }
    }
    if(vv.size()>1){
        sort(vv.begin(),vv.end());
        ll tm=vv[vv.size()-1]+vv[vv.size()-2];
        an=max(an,tm);
    }
}
 
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,i,j; cin>>n;
    for(i=1;i<=n;i++)cin>>aa[i];
    for(i=1;i<n;i++){
        ll u,v; cin>>u>>v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    dfs(1,0);
    for(i=1;i<=n;i++){
        a[st[i]]=as[i];
    }
    build(n);
    an=-LL_INF;
    dfs2(1,0);
    if(an==-LL_INF)cout<<"Impossible\n";
    else cout<<an<<"\n";
    return;
}
 
int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t=1;
    //cin >> t;
    for(int it=1;it<=t;it++){
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
 
                //Link: https://codeforces.com/contest/743/problem/D