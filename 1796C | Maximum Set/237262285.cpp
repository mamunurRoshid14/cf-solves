//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define CC(x) cout << "Case " << ++x << ":";
#define nn "\n"
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 1000006
 
void solve() {
    ll a,b,i,j;
    cin>>a>>b;
    ll cn=__lg(b/a)+1;
    if(cn==1){
        cout<<"1 "<<b-a+1<<"\n";
        return;
    }
    ll ans=(b>>(cn-1))-a+1;
    ans+=max(0LL,(((b/3)>>(cn-2))-a+1)*(cn-1));
    cout<<cn<<" "<<ans%mod<<"\n";
    return;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1; it<=t; it++) {
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1796/problem/C