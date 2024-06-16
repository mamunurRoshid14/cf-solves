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
    ll n,i,j; string aa; cin>>n>>aa; aa=" "+aa;
    ll pre[n+3],suf[n+3];
    pre[0]=0;
    for(i=1;i<=n;i++){
        pre[i]=pre[i-1]+(aa[i]=='0');
    }
    suf[n+1]=0;
    for(i=n;i>0;i--){
        suf[i]=suf[i+1]+(aa[i]=='1');
    }
    ll an=-1; double mm=n+n;
    for(i=0;i<=n;i++){
        ll l=i,r=n-i;
        if(pre[i]>=(l+1)/2&&suf[i+1]>=(r+1)/2){
            if( abs( (n)/2.0-i ) < mm ){
                mm=abs((n)/2.0-i);
                an=i;
            }
           //cout<<i<<"\n";
        }
    }
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
                //Link: https://codeforces.com/contest/1945/problem/C