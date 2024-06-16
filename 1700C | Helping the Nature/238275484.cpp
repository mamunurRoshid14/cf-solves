//https://codeforces.com/profile/mamunur_roshid_517
        //#include <bits/stdc++.h>
//using namespace std;
//
//#define ll long long
//#define pii pair<int, int>
//#define pll pair<long long, long long>
//#define pb push_back
//#define ff first
//#define ss second
//#define YES cout << "YES\n"
//#define NO cout << "NO\n"
//#define CC(x) cout << "Case " << ++x << ":";
//#define nn "\n"
//#define LL_INF (1LL << 62)
//#define INF (1 << 30)
//#define SetBit(x, k) (x = (1LL << k))
//#define ClearBit(x, k) (x &= ~(1LL << k))
//#define CheckBit(x, k) ((x>>k)&1)
//#define mod 998244353
//#define N 200006
//vector<ll>ad[N];
//ll sz[N],lev[N];
//void dfs(ll s,ll l){
//    sz[s]=1; lev[s]=l;
//    for(auto ii:ad[s]){
//        dfs(ii,l+1);
//        sz[s]+=sz[ii];
//    }
//}
//void solve(){
//    ll n,i,j; cin>>n;
//    for(i=1;i<=n;i++){
//        ad[i].clear();lev[i]=0; sz[i]=0;
//    }
//    for(i=2;i<=n;i++){
//        ll v; cin>>v;
//        ad[v].pb(i);
//    }
//    dfs(1,1);
//    ll cn=0; bool f=0;
//    for(i=2;i<=n;i++){
//        ll av=n-ad[i].size()-1;
//        if(av)cn++;
//        else if(lev[i]>2)f=1;
//    }
//    if(f)cn++;
//    cout<<cn/2<<"\n";
//    return;
//}
//
//int main(){
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    int t=1;
//    cin >> t;
//    for(int it=1;it<=t;it++){
//        solve();
//    }
//    return 0;
//}
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
 
void solve(){
    ll n,i,j; cin>>n;
    ll aa[n+4]; for(i=1;i<=n;i++)cin>>aa[i];
    ll an=0,cn=0;
    for(i=2;i<=n;i++){
        aa[i]-=cn;
        if(aa[i]>aa[i-1]){
            an+=aa[i]-aa[i-1];
            cn+=aa[i]-aa[i-1];
            aa[i]=aa[i-1];
        }
    }
    cn=0;
    for(i=n-1;i>=1;i--){
        aa[i]-=cn;
        if(aa[i]>aa[i+1]){
            an+=aa[i]-aa[i+1];
            cn+=aa[i]-aa[i+1];
            aa[i]=aa[i+1];
        }
    }
    an+=abs(aa[1]);
    cout<<an<<"\n";
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
                //Link: https://codeforces.com/contest/1700/problem/C