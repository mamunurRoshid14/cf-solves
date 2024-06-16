//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define LL_INF (1LL << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
ll aa[5]= {1,3,6,10,15};
ll f(ll n,ll p){
    if(p==-1&&n==0){
        return 0;
    }
    else if(p==-1)return INT_MAX;
    ll a=n/aa[p];
    n=n%aa[p];
    if(a==0){
        return f(n,p-1);
    }
    else{
        return min(a+f(n,p-1),a-1+f(n+aa[p],p-1));
    }
}
 
void solve() {
    //First, confirm your idea with pen and paper.
    ll n,i,j;
    cin>>n;
    cout<<f(n,4)<<"\n";
    return;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1934/problem/B