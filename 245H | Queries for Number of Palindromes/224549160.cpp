//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
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
 
short int dp[5005][5005];
string aa;
ll n;
 
BIT <ll,5005,5005>B;
void f(int l,int r){
    if(r<l)return;
    if(l==r) dp[l][r]=1;
    if(l+1==r){
        if(aa[l]==aa[r]){
            dp[l][r]=1;
        }
        else{
            dp[l][r]=0;
        }
        dp[l][l]=1;
        dp[r][r]=1;
    }
 
    if(dp[l][r]!=-1) return;
 
    f(l+1,r); f(l,r-1); f(l+1,r-1);
    if(dp[l+1][r-1]==1&&aa[l]==aa[r]){
        dp[l][r]=1;
    }
    else{
        dp[l][r]=0;
    }
}
void solve(){
    cin>>aa;
    memset(dp,-1,sizeof dp);
    f(0,aa.size()-1);
    ll sum=0;
    for(ll i=0;i<aa.size();i++){
        for(ll j=0;j<i;j++){
            B.upd(i+1,j+1,0);
        }
        for(ll j=i;j<aa.size();j++){
            B.upd(i+1,j+1,dp[i][j]);
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