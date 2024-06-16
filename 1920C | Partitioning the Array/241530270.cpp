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
    ll aa[n];
    for(i=0;i<n;i++)cin>>aa[i];
    vector<ll>v;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            v.pb(i);
            if(n/i!=i){
                v.pb(n/i);
            }
        }
    }
    ll cn=0;
    for(auto ii:v){
        ll x=n/ii;
        vector<pll>vv;
        for(i=0;i+1<x;i++){
            for(j=i*ii;j<ii*(i+1);j++){
                ll l=j,r=j+ii;
                if(aa[l]==aa[r])continue;
                else {
                    vv.pb({aa[l],aa[r]});
                }
            }
        }
        if(vv.size()==0){
            cn++;
            continue;
        }
        else{
            ll d=abs(vv[0].ss-vv[0].ff);
 
            for(auto ii:vv){
                ll dd=abs(ii.ff-ii.ss);
                d=__gcd(d,dd);
            }
            if(d>1)cn++;
 
        }
    }
    cout<<cn<<"\n";
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
                //Link: https://codeforces.com/contest/1920/problem/C