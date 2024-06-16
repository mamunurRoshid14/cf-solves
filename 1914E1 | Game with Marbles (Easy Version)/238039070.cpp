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
//bool F(pll a, pll b){
//    if(a.ff-1>b.ff){
//        return 1;
//    }
//    if(a.ff-1==b.ff){
//        return (a.ss>b.ss-1);
//    }
//    return 0;
//}
//void solve(){
//    ll n,i,j; cin>>n;
//    ll aa[n],bb[n];
//    multiset<pll,greater<pll>>st1,st2;
//    for(i=0;i<n;i++){
//        cin>>aa[i];
//    }
//    for(i=0;i<n;i++){
//        cin>>bb[i];
//    }
//    for(i=0;i<n;i++){
//        st1.insert({aa[i],bb[i]});
//        st2.insert({bb[i],aa[i]});
//    }
//    ll q=n;
//    bool f=1;
//    ll A=0,B=0;
//    while(q--){
//        if(f){
//            auto a=*st1.begin();
//            auto b=*st2.begin();
//
//            if(F(a,b)){
//                A+=a.ff-1;
//                st1.erase(st1.find(a));
//                st2.erase(st2.find({a.ss,a.ff}));
//            }
//            else{
//                A+=b.ss-1;
//                st1.erase(st1.find({b.ss,b.ff}));
//                st2.erase(st2.find(b));
//            }
//
//            f=0;
//        }
//        else{
//            auto a=*st1.begin();
//            auto b=*st2.begin();
//
//            if(F(b,a)){
//                B+=b.ff-1;
//                st1.erase(st1.find({b.ss,b.ff}));
//                st2.erase(st2.find(b));
//            }
//            else{
//                B+=a.ss-1;
//                st1.erase(st1.find(a));
//                st2.erase(st2.find({a.ss,a.ff}));
//            }
//            f=1;
//        }
//        //cout<<A<<"  "<<B<<"\n";
//    }
//    cout<<(A-B)<<"\n";
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
    ll aa[n],bb[n];
    for(i=0;i<n;i++)cin>>aa[i];
    for(i=0;i<n;i++)cin>>bb[i];
    vector<pll>v;
    for(i=0;i<n;i++){
        v.push_back({aa[i],bb[i]});
    }
    ll q=n;
    bool f=1;
    ll A=0,B=0;
    while(q--){
        if(f){
            vector<pll>vv=v;
 
            ll in=0,mx=-LL_INF;
            for(i=0;i<vv.size();i++){
                if(vv[i].ff-1+vv[i].ss>mx){
                    in=i;
                    mx=vv[i].ff-1+vv[i].ss;
                }
            }
            A+=vv[in].ff-1;
            v.clear();
            for(i=0;i<vv.size();i++){
                if(i==in)continue;
                v.push_back(vv[i]);
            }
            f=0;
        }
        else{
            vector<pll>vv=v;
            ll in=0,mx=-LL_INF;
            for(i=0;i<vv.size();i++){
                if(vv[i].ss-1+vv[i].ff>mx){
                    in=i;
                    mx=vv[i].ss-1+vv[i].ff;
                }
            }
            B+=vv[in].ss-1;
            v.clear();
            for(i=0;i<vv.size();i++){
                if(i==in)continue;
                v.push_back(vv[i]);
            }
 
            f=1;
        }
    }
    cout<<(A-B)<<"\n";
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
                //Link: https://codeforces.com/contest/1914/problem/E1