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
    ll n,i,j; cin>>n;
    vector<pll>v;
    ll ct[n+2],cd[n+2];
    memset(ct,0,sizeof(ct));
    memset(cd,0,sizeof(cd));
    for(i=0;i<n;i++){
        ll t,d; cin>>t>>d;
        v.push_back({t,d});
        ct[t]++,cd[d]++;
    }
    ll an=(n*(n-1)*(n-2))/(3*2);
    for(i=0;i<n;i++){
        ll t,d; tie(t,d)=v[i];
        an-=((ct[t]-1)*(cd[d]-1));
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
                //Link: https://codeforces.com/contest/1598/problem/D