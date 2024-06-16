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
    ll n,m,i,k,j; cin>>n;
    ll aa[n];
    for(i=0;i<n;i++)cin>>aa[i];
    bool f=1;
    for(i=1;i<n-1;i++){
        ll a=aa[i-1];
        //a=min(a,min(aa[i-1],aa[i+1]));
        aa[i-1]-=a;
        aa[i+1]-=a;
        aa[i]-=(2*a);
        if(aa[i]<0||aa[i+1]<0){
            f=0;
            break;
        }
    }
    for(i=0;i<n;i++){
        if(aa[i]!=0)f=0;
    }
    if(f){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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
                //Link: https://codeforces.com/contest/1941/problem/B