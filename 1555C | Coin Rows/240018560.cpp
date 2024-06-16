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
//    vector<ll>v={6,8,10,12,16,20};
//    vector<ll>v2={15,20,25,30,40,50};
//    ll an=0;
//    reverse(v.begin(),v.end());
//    reverse(v2.begin(),v2.end());
//    ll n; cin>>n;
//    for(ll i=0;i<6;i++){
//        ll tm=(n+v[i]-1)/v[i];
//        an+=v2[i]*tm;
//        n-=(tm*v[i]);
//        if(n<=0)break;
//    }
//    if(n>0){
//        an+=15LL;
//    }
//    cout<<an<<"\n";
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
    ll m,i,j; cin>>m;
    ll aa[5][m+5];
    ll pre[5][m+5]; memset(pre,0,sizeof pre);
    for(i=1;i<=2;i++){
        for(j=1;j<=m;j++){
            cin>>aa[i][j];
            pre[i][j]=pre[i][j-1]+aa[i][j];
        }
    }
    ll an=LL_INF;
    for(i=1;i<=m;i++){
        ll s1=pre[1][m]-pre[1][i];
        ll s2=pre[2][i-1];
        //cout<<i<<" "<<s1<<" "<<s2<<"\n";
        an=min(an,max(s1,s2));
    }
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
                //Link: https://codeforces.com/contest/1555/problem/C