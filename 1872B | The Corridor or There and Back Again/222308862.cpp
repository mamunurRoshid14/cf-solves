//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i; cin>>n;
    vector<pair<ll,ll>>v;
    map<ll,ll>mp;
    for(i=0;i<n;i++){
        ll d,s; cin>>d>>s;
        if(mp[d]==0) mp[d]=s;
        else{
            mp[d]=min(mp[d],s);
        }
    }
    for(auto ii:mp){
        v.push_back({ii.F,ii.S});
    }
    ll l=0,r=INT_MAX;
    ll ans=0;
    while(l<=r){
        ll m=(l+r)/2;
        bool f=true;
        for(auto ii: v){
            if(ii.F>m) continue;
            ll a=ii.S+ii.F-1;
            ll b=(m-1)+(m-ii.F)+1;
            if(a<b) f=false;
        }
        if(f){
            l=m+1;
            ans=max(ans,m);
        }
        else{
            r=m-1;
        }
    }
    cout<<ans<<"\n";
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
 
 
                //Link: https://codeforces.com/contest/1872/problem/B