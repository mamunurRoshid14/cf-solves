//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
vector<ll>ad[200005];
ll vis[200005],critical_v;
void dfs(ll v, ll p){
    if(vis[v]==1){
        critical_v=p;
        return;
    }
    vis[v]=1;
    for(auto ii:ad[v]){
        if(ii!=p){
            dfs(ii,v);
        }
    }
}
void solve(){
    ll n,a,b; cin>>n>>a>>b;
    for(ll i=1;i<=n;i++){
        ad[i].clear();
        vis[i]=0;
    }
    for(ll i=0;i<n;i++){
        ll u,v; cin>>u>>v;
        ad[u].push_back(v);
        ad[v].push_back(u);
    }
    dfs(b,0);
    //cout<<"F "<<critical_v<<"\n";
    queue<pair<ll,ll>>qq;
    qq.push({b,0});
    ll vv[n+2]; memset(vv,0,sizeof vv); vv[b]=1;
    ll bt=INT_MAX;
    while(qq.size()){
        ll v=qq.front().F;
        ll t=qq.front().S;
        vv[v]=1;
        qq.pop();
        if(v==critical_v){
            bt=min(bt,t);
        }
        for(auto ii:ad[v]){
            if(!vv[ii]){
                qq.push({ii,t+1});
            }
        }
    }
    ll at=INT_MAX; qq.push({a,0}); memset(vv,0,sizeof vv); vv[a]=1;
    while(qq.size()){
        ll v=qq.front().F;
        ll t=qq.front().S;
        vv[v]=1;
        qq.pop();
        if(v==critical_v){
            at=min(at,t);
        }
        for(auto ii:ad[v]){
            if(!vv[ii]){
                qq.push({ii,t+1});
            }
        }
    }
    //cout<<"F "<<bt<<" "<<at<<"\n\n";
    if(bt<at){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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
                //Link: https://codeforces.com/contest/1873/problem/H