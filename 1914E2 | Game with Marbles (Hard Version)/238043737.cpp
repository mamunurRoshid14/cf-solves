//https://codeforces.com/profile/mamunur_roshid_517
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
    ll aaa[n],bbb[n];
    for(i=0;i<n;i++)cin>>aa[i];
    for(i=0;i<n;i++)cin>>bb[i];
    multiset<pll,greater<pll>>st1;
    for(i=0;i<n;i++){
        ll a=aa[i]-1+bb[i];
        st1.insert({a,i});
        aaa[i]=a;
    }
    ll q=n;
    bool f=1;
    ll A=0,B=0;
    while(q--){
        if(f){
            auto a=*st1.begin();
            A+=aa[a.ss]-1;
            st1.erase(st1.begin());
            f=0;
        }
        else{
            auto a=*st1.begin();
            B+=bb[a.ss]-1;
            st1.erase(st1.begin());
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
                //Link: https://codeforces.com/contest/1914/problem/E2