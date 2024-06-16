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
char res;
void query(ll a,ll b,ll c,ll d) {
    cout<<"? "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
    cin>>res;
}
void solve() {
    //First, confirm your idea with pen and paper.
    ll n,i,j;
    cin>>n;
    if(n==2) {
        cout<<"! 0 1"<<endl;
        return;
    }
    ll ni=0;
    for(i=1; i<n; i++) {
        query(ni,ni,i,i);
        if(res=='<') {
            ni=i;
        }
    }
    ll mxi=0,mni=0;
    for(i=0;i<n;i++){
        query(ni,mxi,i,ni);
        if(res=='<'){
            mxi=i;
            mni=i;
        }
        else if(res=='='){
            query(mni,mni,i,i);
            if(res=='>'){
                mni=i;
                mxi=i;
            }
        }
    }
    cout<<"! "<<ni<<" "<<mni<<endl;
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
                //Link: https://codeforces.com/contest/1937/problem/C