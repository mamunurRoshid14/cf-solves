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
ll f(ll a){
    return (a*(a+1))/2;
}
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,i,j; cin>>n;
    ll aa[n+3],bb[n+3];
    ll mapa[n+3],mapb[n+3];
    for(i=1;i<=n;i++){
        cin>>aa[i];
        mapa[aa[i]]=i;
    }
    for(i=1;i<=n;i++){
        cin>>bb[i];
        mapb[bb[i]]=i;
    }
    ll mn=min(mapa[1],mapb[1]),mx=max(mapa[1],mapb[1]);
    ll an=f(mn-1);
    an+=f(n-mx);
    an+=f(mx-mn-1);
    for(i=1;i<n;i++){
        ll a=mapa[i];
        ll b=mapb[i];
        mn=min(mn,min(a,b));
        mx=max(mx,max(a,b));
        a=mapa[i+1];
        b=mapb[i+1];
        if((a<mn&&b<mn)){
            ll tm1=mn-max(a,b);
            ll tm2=n-mx+1;
            an+=tm1*tm2;
        }
        else if(a>mx&&b>mx){
            ll tm1=min(a,b)-mx;
            ll tm2=mn;
            an+=(tm1*tm2);
        }
        else if(min(a,b)<mn&&max(a,b)>mx){
            if(a>b)swap(a,b);
            ll tm1=mn-a;
            ll tm2=b-mx;
            an+=tm1*tm2;
        }
    }
    an++;
 
    cout<<an<<"\n";
    return;
}
 
int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t=1;
    //cin >> t;
    for(int it=1;it<=t;it++){
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1793/problem/D