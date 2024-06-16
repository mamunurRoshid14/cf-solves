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
//#define N 1000006
//
//void solve(){
//    ll n,i,j; cin>>n;
//    vector<ll>ad[n+2];
//    for(i=1;i<n;i++){
//        ll u,v; cin>>u>>v;
//        ad[u].push_back(v);
//        ad[v].push_back(u);
//    }
//    ll an=1;
//    for(i=1;i<=n;i++){
//        ll tm=ad[i].size();
//        an+=((tm-1)/2);
//    }
//    cout<<an<<"\n";
//
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
    ll n,i,j; cin>>n; string aa; cin>>aa;
    bool f=1;
    map<char,vector<ll>,greater<char>>mp;
    for(i=0;i<n;i++){
        mp[aa[i]].push_back(i);
    }
    ll an=0;
    string bb="";
    vector<ll>vv;
    ll mx=-1;
    for(auto ii:mp){
        for(auto iii:ii.ss){
            if(iii>mx){
                bb.push_back(ii.ff);
                vv.push_back(iii);
                mx=iii;
            }
        }
    }
    an+=bb.size();
    for(i=0,j=bb.size()-1;i<j;i++,j--){
        swap(aa[vv[i]],aa[vv[j]]);
    }
    bb=aa;
    sort(bb.begin(),bb.end());
    if(aa!=bb)f=0;
    an-=mp.begin()->ss.size();
    if(f==0){
        cout<<"-1\n";
    }
    else cout<<an<<"\n";
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
                //Link: https://codeforces.com/contest/1905/problem/C