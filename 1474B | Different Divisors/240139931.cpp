//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define CC(x) cout << "Case " << ++x << ":";
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 1000006
ll v[N];
set<ll>st;
void solve() {
    //First, confirm your idea with pen and paper.
    ll d;
    cin>>d;
    ll n=1;
    ll cur=1;
    for(ll i=0;i<2;i++){
        ll a=*st.lower_bound(cur+d);
        n*=a; cur=a;
    }
    cout<<n<<"\n";
    return;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    for(ll i=2; i<N; i++) {
        if(v[i]==0) {
            st.insert(i);
            for(ll j=i+i; j<N; j+=i) {
                v[j]=1;
            }
        }
    }
    int t=1;
    cin >> t;
    for(int it=1; it<=t; it++) {
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1474/problem/B