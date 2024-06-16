//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
long long binpow(long long a, long long b) {
    if (b == 0)
        return 1;
    long long res = binpow(a, b / 2)%mod;
    if (b % 2)
        return ((res * res)%mod * a)%mod;
    else
        return (res * res)%mod;
}
void solve(){
    ll n; cin>>n;
    ll m=2*n;
    ll f[m]; f[0]=1;
    for(ll i=1;i<m;i++){
        f[i]=(f[i-1]*i)%mod;
    }
    ll ans=f[m-1];
    ll a=(f[n]*f[n-1])%mod;
    ll a1=binpow(a,mod-2)%mod;
    ans*=a1;
    ans%=mod;
    ans*=2;
    ans%=mod;
    ans-=n;
    ans%=mod;
    cout<<ans<<"\n";
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
 
                //Link: https://codeforces.com/contest/57/problem/C