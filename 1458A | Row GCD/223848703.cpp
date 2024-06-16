//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,m,i; cin>>n>>m;
    ll aa[n];
    for(i=0;i<n;i++) cin>>aa[i];
    ll g=0;
    sort(aa,aa+n);
    for(i=0;i<n;i++){
        g=__gcd(g,aa[i]-aa[0]);
    }
    for(i=0;i<m;i++){
        ll tm;
        cin>>tm;
        cout<<__gcd(g,aa[0]+tm)<<" ";
    }
    cout<<"\n";
}
int main(){
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    //cin>>t;
    for(ll it=1; it<=t; it++)
    {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
 
                //Link: https://codeforces.com/contest/1458/problem/A