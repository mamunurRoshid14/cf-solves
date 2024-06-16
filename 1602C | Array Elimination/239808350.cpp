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
//#define CC(x) cout << "Case " << ++x << ":";
//#define LL_INF (1LL << 62)
//#define INF (1 << 30)
//#define SetBit(x, k) (x = (1LL << k))
//#define ClearBit(x, k) (x &= ~(1LL << k))
//#define CheckBit(x, k) ((x>>k)&1)
//#define mod 998244353
//#define N 200006
//
//void solve(){
//    //First, confirm your idea with pen and paper.
//    ll n,i,j; cin>>n;
//    ll aa[n+2];
//    ll cn[n+2];memset(cn,0,sizeof cn);
//    for(i=1;i<=n;i++){
//        cin>>aa[i]; cn[aa[i]]++;
//    }
//    map<ll,ll>mp;
//    for(i=1;i<=n;i++){
//        mp[cn[i]]+=cn[i];
//    }
//    ll q; cin>>q; while(q--){
//        ll p,x; cin>>p>>x;
//        ll an=aa[p];
//        ll c=cn[an];
//        while(x--){
//            an=c;
//            if(mp[c]==0||c==mp[c])break;
//            c=mp[c];
//        }
//        cout<<an<<"\n";
//    }
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
#define CC(x) cout << "Case " << ++x << ":";
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 200006
 
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,i,j; cin>>n;
    ll aa[n]; for(i=0;i<n;i++)cin>>aa[i];
    ll cn[35]; memset(cn,0,sizeof cn);
    for(i=0;i<n;i++){
        for(j=0;j<31;j++){
            if(CheckBit(aa[i],j))cn[j]++;
        }
    }
    for(i=1;i<=n;i++){
            ll k1=i;
            bool f=1;
            for(j=0;j<32;j++){
                if(cn[j]%k1)f=0;
            }
            if(f){
                cout<<k1<<" ";
            }
    }
    cout<<"\n";
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
                //Link: https://codeforces.com/contest/1602/problem/C