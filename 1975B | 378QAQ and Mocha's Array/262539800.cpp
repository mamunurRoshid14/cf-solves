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
    ll n,i,j; cin>>n;
    ll aa[n+2];
    for(i=0;i<n;i++)cin>>aa[i];
    sort(aa,aa+n);
    vector<ll>v;
    for(i=0;i<n;i++){
        if(v.size()==0){
            v.push_back(aa[i]);
            continue;
        }
        if(v.size()==1){
            if(aa[i]%v[0]==0){
 
            }
            else{
                v.push_back(aa[i]);
            }
        }
        else if(v.size()==2){
            if(aa[i]%v[0]==0||aa[i]%v[1]==0){
 
            }
            else{
                v.push_back(aa[i]);
            }
        }
        else{
            continue;
        }
    }
    if(v.size()<=2)cout<<"Yes\n";
    else cout<<"No\n";
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
                //Link: https://codeforces.com/contest/1975/problem/B