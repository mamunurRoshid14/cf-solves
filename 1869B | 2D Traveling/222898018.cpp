//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,k,a,b,i,j; cin>>n>>k>>a>>b;
    vector<pair<ll,ll>>v;
    for(i=0;i<n;i++){
        ll x,y; cin>>x>>y;
        v.push_back({x,y});
    }
    a--;
    b--;
    k--;
    ll mn1=1e15,mn2=1e15;
    for(i=0;i<=k;i++){
        ll tm=llabs(v[a].F-v[i].F)+llabs(v[a].S-v[i].S);
        mn1=min(mn1,tm);
    }
 
    for(i=0;i<=k;i++){
        ll tm=llabs(v[b].F-v[i].F)+llabs(v[b].S-v[i].S);
        mn2=min(mn2,tm);
    }
 
    ll ans=llabs(v[a].F-v[b].F)+llabs(v[a].S-v[b].S);
    ans=min(ans,mn1+mn2);
    //cout<<mn1<<" "<<mn2<<"\n";
    cout<<ans<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1;it<=t;it++){
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1869/problem/B