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
    ll n,m,i,k,j; cin>>n>>m>>k;
    ll aa[n];
    vector<ll>bb(m);
    for(i=0;i<n;i++)cin>>aa[i];
    for(i=0;i<m;i++)cin>>bb[i];
    sort(bb.begin(),bb.end());
    ll an=0;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(aa[i]+bb[j]<=k)an++;
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
                //Link: https://codeforces.com/contest/1941/problem/A