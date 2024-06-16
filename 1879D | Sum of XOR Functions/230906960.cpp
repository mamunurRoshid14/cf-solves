//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 998244353
void solve() {
    ll n,i,j;
    cin>>n;
    ll aa[n+2];
    for(i=1; i<=n; i++) {
        cin>>aa[i];
    }
    ll ans=0; ll num=1LL;
    for(i=0; i<35; i++) {
        ll cn0=1,cn1=0,cn2=0,cn3=0,prex=0;
        for(j=1; j<=n; j++) {
            prex^=((aa[j]>>i)&1);
            if(prex==0){
                ll sR=cn1*j;
                ll sL=cn3;
                ans+=(num*((sR-sL)%mod));
                cn0++;
                cn2+=j;
            }
            else{
                ll sR=cn0*j;
                ll sL=cn2;
                ans+=(num*((sR-sL)%mod));
                cn1++;
                cn3+=j;
            }
            ans%=mod;
        }
        num*=2LL; num%=mod;
    }
    cout<<ans<<"\n";
}
int main() {
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    //cin>>t;
    for(ll it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
 
                //Link: https://codeforces.com/contest/1879/problem/D