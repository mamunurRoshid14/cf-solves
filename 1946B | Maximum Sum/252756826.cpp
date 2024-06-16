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
ll M=1000000007;
void solve() {
    //First, confirm your idea with pen and paper.
    ll n,i,j,k; cin>>n>>k;
    ll aa[n];
    for(i=0;i<n;i++)cin>>aa[i];
    ll an=0;
    ll s=0;
    ll ss=0;
    for(i=0;i<n;i++){
        s+=aa[i];
        an=max(s,an);
        if(s<0)s=0;
        ss+=aa[i];
    }
    an=max(an,ss);
    ss-=an;
 
    for(i=1;i<=k;i++){
        an+=an;
        an%=M;
    }
    an+=ss; an%=M;
    cout<<(an+M)%M<<"\n";;
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
                //Link: https://codeforces.com/contest/1946/problem/B