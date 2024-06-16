//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j; cin>>n;
    ll aa[n+2];
    for(i=1;i<=n;i++) cin>>aa[i];
    ll dp[n+2]; dp[n+1]=0;
    for(i=n;i>0;i--){
        ll a=dp[i+1]+1;
        ll b=INT_MAX;
        if(aa[i]+i+1<=n+1) b=dp[aa[i]+i+1];
        dp[i]=min(a,b);
    }
    cout<<dp[1]<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1; it<=t; it++)
    {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1881/problem/E