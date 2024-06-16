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
    ll aa[n+2]; for(i=1;i<=n;i++)cin>>aa[i];
    vector<ll>v;
    v.push_back(0);
    for(i=2;i+1<=n;i++){
        if(aa[i]!=aa[1]){
            v.push_back(i);
        }
    }
    v.push_back(n+1);
    if(v.size()<=2){
        cout<<"-1\n";
        return;
    }
    ll an=n+10;
    for(i=1;i<v.size();i++){
        ll a=v[i]-v[i-1]-1;
        an=min(an,a);
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
                //Link: https://codeforces.com/contest/1954/problem/B