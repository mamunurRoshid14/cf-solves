//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,w,i; cin>>n>>w;
    ll aa[n+3];
    for(i=1;i<=n;i++) cin>>aa[i];
    ll an=-1;
    ll l=0,r=INT_MAX;
    while(l<=r){
        ll m=(l+r)/2;
        ll s=0;
        for(i=1;i<=n;i++){
            s+=max(0LL,m-aa[i]);
        }
        if(s<=w){
            an=m;
            l=m+1;
        }
        else{
            r=m-1;
        }
    }
    cout<<an<<"\n";
}
int main() {
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1;it<=t;it++){
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1873/problem/E