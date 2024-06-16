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
//#define LL_INF (1LL << 62)
//#define INF (1 << 30)
//#define SetBit(x, k) (x = (1LL << k))
//#define ClearBit(x, k) (x &= ~(1LL << k))
//#define CheckBit(x, k) ((x>>k)&1)
//#define mod 998244353
//#define N 1000006
//
//void solve(){
//     ll n; cin>>n;
//    string aa; cin>>aa;
//    char mn='A';
//    ll cn=0;
//    for(ll i=0;i<aa.size();i++){
//        if(aa[i]==mn){
//            cn++;
//            mn++;
//        }
//    }
//    cout<<cn<<"\n";
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
    ll n,k,i; cin>>n>>k;
    vector<ll>v;
    if(k==0){
        for(i=n;i>0;i--){
            cout<<i<<" ";
        }
        cout<<"\n";
        return;
    }
    ll cn=n-k;
    for(i=cn;i>=1;i--){
        v.push_back(i);
    }
    for(i=cn+1;i<=n;i++){
        v.push_back(i);
    }
    for(auto ii:v)cout<<ii<<" ";cout<<"\n";
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
                //Link: https://codeforces.com/contest/1914/problem/B