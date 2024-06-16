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
    //First, confirm your idea with pen and paper.
    ll n,i,j,k;
    string s;
    cin>>s;
    s="1"+s;
    n=s.size();
    int ans = 0;
    int a[n+2];
    for(int k=1; k<=n/2; k++) {
        for(i=0; i<n; i++) a[i] = 0;
        for(i=k+1; i<n; i++) {
            a[i] = s[i] == s[i - k];
            if(s[i] == '?' or s[i - k] == '?') a[i] = 1;
            a[i] += a[i-1];
        }
        for(i=k<<1; i<n; i++) {
            if(a[i] - a[i - k] == k) ans = k << 1;////****
        }
    }
    cout<<ans<<"\n";
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
                //Link: https://codeforces.com/contest/1948/problem/D