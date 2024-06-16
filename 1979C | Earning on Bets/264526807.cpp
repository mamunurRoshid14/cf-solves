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
    ll n,i,j; cin>>n;
    ll aa[n]; for(i=0;i<n;i++)cin>>aa[i];
    ll l=1,r=(ll)((ll)(1e9)*n);
    vector<ll>vv;
    while(l<=r){
        ll m=(l+r)/2;
        vector<ll>v;
        for(i=0;i<n;i++){
            ll c=(m+aa[i]-1)/aa[i];
            v.push_back(c);
        }
        ll to=0;
        for(auto ii:v){
            to+=ii;
        }
        bool f=1;
        for(i=0;i<n;i++){
            ll cc=aa[i]*v[i];
            if(cc<=to)f=0;
        }
        if(to<=m&&f){
            vv=v;
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    if(vv.size()){
        for(auto ii:vv)cout<<ii<<" ";cout<<"\n";
    }
    else{
        cout<<"-1\n";
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
                //Link: https://codeforces.com/contest/1979/problem/C