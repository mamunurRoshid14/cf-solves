//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define LL_INF (1LL << 62)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
vector<ll>ad[100005];
ll sz[100005];
ll par[100005];
ll child[100005];
void dfs(ll s, ll p){
    par[s]=p;
    sz[s]=1;
    child[s]=1;
    for(auto ii:ad[s]){
        if(ii==p)continue;
        dfs(ii,s);
        sz[s]+=sz[ii];
        child[s]++;
    }
}
void solve() {
    //First, confirm your idea with pen and paper.
    ll n,i,j,k; cin>>n>>k;
    for(i=1;i<=n;i++)ad[i].clear();
    for(i=1;i<n;i++){
        ll u,v; cin>>u>>v;
        ad[v].push_back(u);
        ad[u].push_back(v);
    }
    ll leaf=1;
    for(i=1;i<=n;i++){
        if(ad[i].size()==1){
            leaf=i;
            break;
        }
    }
    dfs(leaf,0);
    ll l=1,r=n/(k+1);
    ll ans=1;
    while(l<=r){
        ll m=(l+r)/2;
        ll tm[n+1];
        ll vis[n+2];
        ll Child[n+2];
        ll kk=k;
        for(i=1;i<=n;i++)tm[i]=sz[i],vis[i]=0,Child[i]=child[i];
        vis[0]=1;
        vector<ll>tar;
        for(i=1;i<=n;i++){
            if(tm[i]==1){
                tar.push_back(i);
                vis[i]=1;
            }
        }
        while(1){
            vector<ll>tt;
            for(auto ii:tar){
                if(tm[ii]>=m){
                    kk--;
                    tm[par[ii]]-=sz[ii];//F
                    Child[par[ii]]--;
                    if(vis[par[ii]])continue;
 
                    if(Child[par[ii]]>1)continue;
                    vis[par[ii]]=1;
                    tt.push_back(par[ii]);
                }
                else{
                    tm[par[ii]]-=(sz[ii]-tm[ii]);
                    Child[par[ii]]--;
                    if(vis[par[ii]])continue;
                    if(Child[par[ii]]>1)continue;
                    vis[par[ii]]=1;
                    tt.push_back(par[ii]);
                }
            }
            if(tt.size()==0)break;
            tar=tt;
        }
        if(kk<0){
            ans=max(ans,m);
            l=m+1;
        }
        else{
            r=m -1;
        }
    }
 
    for(i=1;i<=n;i++){
        if(sz[i]==1){
            leaf=i;
            break;
        }
    }
    dfs(leaf,0);
    l=1,r=n/(k+1);
    while(l<=r){
        ll m=(l+r)/2;
        ll tm[n+1];
        ll vis[n+2];
        ll Child[n+2];
        ll kk=k;
        for(i=1;i<=n;i++)tm[i]=sz[i],vis[i]=0,Child[i]=child[i];
        vis[0]=1;
        vector<ll>tar;
        for(i=1;i<=n;i++){
            if(tm[i]==1){
                tar.push_back(i);
                vis[i]=1;
            }
        }
        while(1){
            vector<ll>tt;
            for(auto ii:tar){
                if(tm[ii]>=m){
                    kk--;
                    tm[par[ii]]-=sz[ii];//F
                    Child[par[ii]]--;
                    if(vis[par[ii]])continue;
 
                    if(Child[par[ii]]>1)continue;
                    vis[par[ii]]=1;
                    tt.push_back(par[ii]);
                }
                else{
                    tm[par[ii]]-=(sz[ii]-tm[ii]);
                    Child[par[ii]]--;
                    if(vis[par[ii]])continue;
                    if(Child[par[ii]]>1)continue;
                    vis[par[ii]]=1;
                    tt.push_back(par[ii]);
                }
            }
            if(tt.size()==0)break;
            tar=tt;
        }
        if(kk<0){
            ans=max(ans,m);
            l=m+1;
        }
        else{
            r=m -1;
        }
    }
 
    cout<<ans<<"\n";
    return;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1946/problem/C