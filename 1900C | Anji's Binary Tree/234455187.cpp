//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
vector<ll>ad[300005];
string aa;
ll dfs(ll s,ll p){
    if(ad[s][0]==0&&ad[s][1]==0){
        return 0;
    }
    ll l=INT_MAX;
    if(ad[s][0]!=0){
        l=dfs(ad[s][0],s)+1; if(aa[s]=='L')l--;
    }
    ll r=INT_MAX;
    if(ad[s][1]!=0){
        r=dfs(ad[s][1],s)+1; if(aa[s]=='R')r--;
    }
    return min(l,r);
}
void solve(){
    ll n,i,j; cin>>n; cin>>aa; aa=" "+aa;
    for(i=1;i<=n;i++){
        ad[i].clear();
    }
    for(i=1;i<=n;i++){
        ll u,v; cin>>u>>v;
        ad[i].push_back(u);
        ad[i].push_back(v);
    }
    ll an=dfs(1,0);
    cout<<an<<"\n";
 
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
 
                //Link: https://codeforces.com/contest/1900/problem/C