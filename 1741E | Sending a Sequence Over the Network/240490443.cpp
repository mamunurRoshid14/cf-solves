//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ss first
#define ff second
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
 
void solve(){
    ll n,i,j; cin>>n;
    ll aa[n+4]; ll f[n+4]; memset(f,0,sizeof f);
    for(i=1;i<=n;i++){
        cin>>aa[i];
    }
    set<pll>st;
    for(i=1;i<=n;i++){
        ll l=i-aa[i];
        ll r=i+aa[i];
        st.insert({i,l});
        st.insert({r,i});
    }
    f[0]=1; bool an=0;
    for(auto ii:st){
        if(ii.ff<1||ii.ss>n)continue;
        if(f[ii.ff-1]==1){
            f[ii.ss]=1;
            if(ii.ss==n)an=1;
        }
    }
    if(an)cout<<"YES\n";
    else cout<<"NO\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1;it<=t;it++){
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1741/problem/E