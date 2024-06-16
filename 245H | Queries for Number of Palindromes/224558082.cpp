//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll int
#define F first
#define S second
#define mod 1000000007
template <class T, int... Ns> struct BIT {
 T val = 0;
 void upd(T v) { val += v; }
 T query() { return val; }
};
 
template <class T, int N, int... Ns> struct BIT<T, N, Ns...> {
 BIT<T, Ns...> bit[N + 1];
 template <typename... Args> void upd(int pos, Args... args) {
  for (; pos <= N; pos += (pos & -pos)) bit[pos].upd(args...);
 }
 template <typename... Args> T sum(int r, Args... args) {
  T res = 0;
  for (; r; r -= (r & -r)) res += bit[r].query(args...);
  return res;
 }
 template <typename... Args> T query(int l, int r, Args... args) {
  return sum(r, args...) - sum(l - 1, args...);
 }
};  // BIT<int,10,10> gives a 2D BIT
 
BIT<ll, 5005, 5005>B;
void solve(){
    string aa; cin>>aa; aa=" "+aa+"   ";
    ll n=aa.size();
    ll dp[n+2][n+2];
    for(ll i=1;i<n;i++){
        dp[i][i]=1;
        dp[i][i+1]=(aa[i]==aa[i+1]);
    }
    for(ll i=3;i<n;i++){
        for(ll j=1;j+i-1<n;j++){
            ll l=j,r=j+i-1; dp[l][r]=dp[l+1][r-1]&(aa[l]==aa[r]);
        }
    }
    for(ll i=1;i<n-1;i++){
        for(ll j=i;j<n-1;j++){
            B.upd(i,j,dp[i][j]);
        }
    }
    ll q; cin>>q;
    while(q--){
        ll l,r; cin>>l>>r;
        cout<<B.query(l,r,l,r)<<"\n";
    }
 
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    //cin>>t;
    for(ll it=1;it<=t;it++){
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
 
                //Link: https://codeforces.com/contest/245/problem/H