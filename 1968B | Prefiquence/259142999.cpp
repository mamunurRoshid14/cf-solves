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
    ll n,m,i,j; cin>>n>>m;
    string aa,bb; cin>>aa>>bb;
    ll in=0,cn=0;
    for(i=0;i<n;i++){
        while(in<m){
            if(aa[i]==bb[in]){
                in++;
                cn++;
                break;
            }
            else{
                in++;
            }
        }
    }
    cout<<cn<<"\n";
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
                //Link: https://codeforces.com/contest/1968/problem/B