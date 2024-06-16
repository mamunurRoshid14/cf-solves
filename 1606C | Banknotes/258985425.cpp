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
void solve() {
    //First, confirm your idea with pen and paper.
    ll n,k,i,j; cin>>n>>k;
    vector<ll>v;
    for(i=0;i<n;i++){
        cin>>j;
        ll num=1;
        while(j--){
            num*=10LL;
        }
        v.push_back(num);
    }
    ll an=0; k++;
    for(i=0;i+1<n;i++){
        ll av=v[i+1]/v[i]-1;
        if(av<=k){
            an+=av*v[i];
            k-=av;
        }
        else{
            an+=(k*v[i]);
            k=0;
        }
    }
    an+=(k*v.back());
    cout<<an<<"\n";
    return;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1606/problem/C