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
    ll n,x,y,i,j; cin>>n>>x>>y;
    ll aa[x+2];
    for(i=0;i<x;i++)cin>>aa[i];
    sort(aa,aa+x);
    aa[x]=aa[0];
    ll an=0,cn=0;
    for(i=0;i<x;i++){
        if((aa[i]+2)%n==(aa[i+1])%n){
            an++;
        }
    }
    if(x%2)an++;
    x/=2;
    an+=(x-1)*2;
    cout<<an<<"\n";
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
                //Link: https://codeforces.com/contest/1942/problem/C1