//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve() {
    ll n,m,k;
    cin>>n>>m>>k;
   if(k==3LL) {
        ll ans=m-n;
        if(m>n){
            ll b=m/n;
            b--;
            ans-=b;
        }
        ans=max(ans,0LL);
        cout<<ans<<"\n";
    } else if(k==2LL) {
        ll ans=min(n,m);
        if(m>n) {
            ll b=m/n;
            b--;
            ans+=b;
        }
        cout<<ans<<"\n";
    } else if(k==1){
        cout<<"1\n";
    }
    else{
        cout<<"0\n";
    }
}
int main() {
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
 
                //Link: https://codeforces.com/contest/1877/problem/C