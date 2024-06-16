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
//void solve() {
//    //First, confirm your idea with pen and paper.
//    ll a,b,i,j;
//    cin>>a>>b;
//    ll num=a*b;
//    if(a==1)num*=b;
//    for(i=2; i*i<b; i++) {
//        if(num%i==0) {
//            ll x=num/i;
//            ll tm=num/i;
//            if(x>a&&tm>b&&tm%b==0&&tm%a==0) {
//                num/=i;
//                i--;
//            }
//        }
//    }
//    cout<<num<<"\n";
//    return;
//}
//
//int main() {
//    ios::sync_with_stdio(false);
//    cin.tie(0);
//    int t=1;
//    cin >> t;
//    for(int it=1; it<=t; it++) {
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
    ll n,k,i,j; cin>>n>>k;
    ll aa[n];
    ll num=1;
    for(i=0;i<n;i++){
        cin>>aa[i];
        num*=aa[i];
    }
    ll cc=2023LL;
    if(cc%num==0){
        cout<<"YES\n";
        cout<<cc/num<<" ";
        for(i=0;i<k-1;i++)cout<<"1 ";
        cout<<"\n";
    }
    else cout<<"NO\n";
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
                //Link: https://codeforces.com/contest/1916/problem/A