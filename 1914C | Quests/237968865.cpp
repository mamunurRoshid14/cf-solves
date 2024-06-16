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
    ll n,k,i,j; cin>>n>>k;
    ll aa[n];
    for(i=0;i<n;i++)cin>>aa[i];
    ll bb[n];
    for(i=0;i<n;i++)cin>>bb[i];
    ll mx[n];
    mx[0]=bb[0];
    for(i=1;i<n;i++){
        mx[i]=max(bb[i],mx[i-1]);
    }
     n=min(k,n);
    ll s=0,an=0;
    for(i=0;i<n;i++){
        s+=aa[i];
        ll tm=(k-i-1)*mx[i];
        an=max(an,tm+s);
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
                //Link: https://codeforces.com/contest/1914/problem/C