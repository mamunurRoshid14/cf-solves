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
    ll n,c,i,j; cin>>n>>c;
    ll aa[n]; for(i=0;i<n;i++)cin>>aa[i];
    ll a=((c+1)*(c+2))/2;
    ll b=0,cc=0; ll ev=0;
    for(i=0;i<n;i++){
        b+=aa[i]/2+1;
        cc+=c-aa[i]+1;
        if(aa[i]%2==0)ev++;
    }
    ll d=((ev)*(ev+1))/2+((n-ev)*(n-ev+1))/2;
    cout<<a-b-cc+d<<"\n";
 
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
                //Link: https://codeforces.com/contest/1935/problem/D