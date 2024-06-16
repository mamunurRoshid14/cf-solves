//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define int long long
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define LL_INF (1LL << 62)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
 
int FindAns(int x,int y) {
    vector<int>prY;
    if(y%2 == 0) {
        prY.emplace_back(2);
        while(y%2 == 0)y/=2;
    }
    for(int i=3; i*i<=y; i+=2) {
        if(y%i == 0) {
            prY.emplace_back(i);
            while(y%i == 0)y/=i;
        }
    }
    if(y > 1)prY.emplace_back(y);
    int l=(int)prY.size(), sum=0;
    for(int i=1; i<(1<<l); i++) {
        int z=1;
        for(int j=0; j<l; j++) {
            if((i >> j) & 1)z *= prY[j];
        }
        if(__builtin_popcount(i) & 1) {
            sum += x/z;
            if(sum >= mod)sum -= mod;
        } else {
            sum -= x/z;
            if(sum < 0)sum += mod;
        }
    }
    x -= sum;
    if(x < 0)x += mod;
    return x;
}
void solve() {
    //First, confirm your idea with pen and paper.
    int m,n;
    cin >> n >> m;
    int a[n+2];
    bool ok=1; a[0]=0;
    for(int i=1; i<=n; i++) {
        cin >> a[i];
        ok &= (a[i-1]%a[i] == 0);
    }
    if(!ok)cout << "0\n";
    else {
        int ans=1;
        for(int i=2; i<=n; i++)ans=(1ll*ans*FindAns(m/a[i],a[i-1]/a[i]))%mod;
        cout << ans << '\n';
    }
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
                //Link: https://codeforces.com/contest/1750/problem/D