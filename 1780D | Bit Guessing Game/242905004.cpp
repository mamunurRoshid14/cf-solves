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
 
int ask (int x) {
    cout << "- " << x << endl;
    if (x == -1)
        exit(0);
    cin >> x;
    return x;
}
void solve() {
    //First, confirm your idea with pen and paper.
    int cnt;
    cin >> cnt;
    int n = 0;
    int was = 0;
    while (cnt > 0) {
        n += 1;
        int nw = ask(1 + was);
        int back = nw - cnt + 1;
        n += (1 << back) - 1;
        was = (1 << back) - 1;
        cnt = nw - back;
    }
    cout << "! " << n << endl;
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
                //Link: https://codeforces.com/contest/1780/problem/D