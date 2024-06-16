//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
ll aa[600];
ll dp[600][600];
ll f(ll l, ll r){
    if(r<l) return 0;
    if(l==r) return dp[l][r]=1;
    if(dp[l][r]!=-1) return dp[l][r];
    ll ans=LLONG_MAX;
    ans=min(ans,f(l+1,r)+1);
    if(aa[l]==aa[l+1]){
        ans=min(ans,f(l+2,r)+1);
    }
 
    for(ll i=l+2;i<=r;i++){
        if(aa[l]==aa[i]){
            ans=min(ans,f(l+1,i-1)+f(i+1,r));
        }
    }
    return dp[l][r]=ans;
}
void solve(){
    ll n,i,j; cin>>n;
    for(i=1;i<=n;i++){
        cin>>aa[i];
    }
    memset(dp,-1,sizeof dp);
    cout<<f(1,n)<<"\n";
}
int main() {
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    //cin>>t;
    for(ll it=1;it<=t;it++){
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
 
                //Link: https://codeforces.com/contest/607/problem/B