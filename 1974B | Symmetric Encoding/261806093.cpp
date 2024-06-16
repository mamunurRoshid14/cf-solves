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
void solve() {
    ll n,i,j; string aa; cin>>n>>aa;
    set<char>st;
    for(auto ii : aa) st.insert(ii);
    string rr="";
    for(auto ii:st)rr.push_back(ii);
    ll nn=rr.size();
    string rrr=rr;
    reverse(rrr.begin(),rrr.end());
    for(i=0;i<n;i++){
        ll  in=0;
        for(j=0;j<nn;j++){
            if(rr[j]==aa[i]){
                aa[i]=rrr[j];
                break;
            }
        }
    }
    cout<<aa<<"\n";
 
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
                //Link: https://codeforces.com/contest/1974/problem/B