//https://codeforces.com/profile/mamunur_roshid_517
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
    ll cn0=0,cn1=0;
    ll c1=0,c0=0;
    for(i=0;i<n;i++){
        ll x,y; cin>>x>>y;
        if(x>0)cn1++;
        if(y>0)cn0++;
        if(x==0)c1++;
        if(y==0)c0++;
    }
    if(cn1==0||cn0==0||cn1==n||cn0==n||cn1+c1==n||cn0+c0==n)cout<<"YES\n";
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
                //Link: https://codeforces.com/contest/1909/problem/A