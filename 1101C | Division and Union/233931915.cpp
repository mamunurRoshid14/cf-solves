//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j; cin>>n;
    vector<pair<ll,pair<ll,ll>>>v;
    for(i=0;i<n;i++){
        ll l,r; cin>>l>>r;
        v.push_back({l,{r,i}});
    }
    sort(v.begin(),v.end());
    ll ans[n+2];
    ll r=v[0].S.F;
    ll f=1;
    for(i=0;i<n;i++){
        if(v[i].F<=r){
            ans[v[i].S.S]=1;
            r=max(r,v[i].S.F);
        }
        else{
            ans[v[i].S.S]=2; f=0;
        }
    }
    if(f){
        cout<<"-1\n";
        return;
    }
    for(i=0;i<n;i++){
        cout<<ans[i]<<" ";
    } cout<<"\n";
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
                //Link: https://codeforces.com/contest/1101/problem/C