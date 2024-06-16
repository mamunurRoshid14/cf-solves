//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define LL_INF (1LL << 62)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
void solve(){
    //First, confirm your idea with pen and paper.
    ll k,x,a,i,j; cin>>k>>x>>a;
    ll s=1;
    for(i=2;i<=x+1;i++){
        ll l=1,r=a-s;
        ll mn=INT_MAX;
        while(l<=r){
            ll m=(l+r)/2;
            if(m*(k-1)>s){
                mn=m;
                r=m-1;
            }
            else{
                l=m+1;
            }
        }
        if(mn<INT_MAX){
            s+=mn;
        }
        else{
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
}
int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1;it<=t;it++){
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1929/problem/C