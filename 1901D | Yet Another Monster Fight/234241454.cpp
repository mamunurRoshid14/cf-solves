//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve() {
    ll n,i;
    cin>>n;
    ll aa[n+10];
    for(i=1; i<=n; i++) cin>>aa[i];
    if(n==1) {
        cout<<aa[1]<<"\n";
        return;
    }
    ll bb[n+2],cc[n+3];
    for(i=1; i<=n; i++) {
        bb[i]=aa[i]+i-1;
        cc[i]=aa[i]+(n-i);
    }
    for(i=n-1;i>=1;i--){
        bb[i]=max(bb[i],bb[i+1]);
    }
    for(i=2;i<=n;i++){
        cc[i]=max(cc[i],cc[i-1]);
    }
    ll an=INT_MAX;
    for(i=2;i<n;i++){
        an=min(an,max({bb[i+1],cc[i-1],aa[i]}));
    }
    an=min(an,max(aa[1],bb[1]));
    an=min(an,max(aa[n],cc[n]));
    cout<<an<<"\n";
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
                //Link: https://codeforces.com/contest/1901/problem/D