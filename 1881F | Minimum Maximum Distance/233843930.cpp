//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
vector<ll>ad[200055];
ll an,V;
ll bb[200055];
void dfs(ll s,ll p,ll d){
    if(bb[s]){
        if(an<d){
            an=d;
            V=s;
        }
    }
    for(auto ii:ad[s]){
        if(ii!=p){
            dfs(ii,s,d+1);
        }
    }
}
void dfs2(ll s,ll p,ll d){
    if(bb[s]){
        if(an<d){
            an=d;
        }
    }
    for(auto ii:ad[s]){
        if(ii!=p){
            dfs(ii,s,d+1);
        }
    }
}
 
 
void solve(){
 
    ll n,k,i,j; cin>>n>>k;
    for(i=1;i<=n;i++){
        ad[i].clear();
        bb[i]=0;
    }
    ll ss;
    for(i=0;i<k;i++){
        ll tt; cin>>tt; bb[tt]=1;
        ss=tt;
    }
    for(i=1;i<n;i++){
        ll u,v; cin>>u>>v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    an=-1;
    dfs(ss,0,0);
    dfs2(V,0,0);
    cout<<ceil(an/2.0)<<"\n";
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
                //Link: https://codeforces.com/contest/1881/problem/F