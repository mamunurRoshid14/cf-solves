//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define CC(x) cout << "Case " << ++x << ":";
#define LL_INF (1LL << 62)
#define INF (1LL << 55)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 200006
 
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,m,i,j; cin>>n>>m;
    ll ad[n+1][n+1];
    for(i=0;i<=n;i++){
        for(j=0;j<=n;j++)ad[i][j]=INF;
    }
    for(i=0;i<m;i++){
        ll u,v,w; cin>>u>>v>>w;
        ad[u][v]=min(ad[u][v],w);
        ad[v][u]=min(ad[v][u],w);
    }
//    for(i=1;i<=n;i++){
//        for(j=1;j<=n;j++)cout<<ad[i][j]<<" ";cout<<"\n";
//    }
    ll s[n+1];
    for(i=1;i<=n;i++)cin>>s[i];
    ll vis[n+2][1002];
    for(i=0;i<=n;i++){
        for(j=0;j<=1000;j++)vis[i][j]=INF;
    }
    priority_queue<tuple<ll,ll,ll>,vector<tuple<ll,ll,ll>>,greater<tuple<ll,ll,ll>>>q;
    q.push(make_tuple(s[1],0,1)); //<slowrate,dis,source>
    vis[1][s[1]]=0;
    ll dis[n+2];
    for(i=1;i<=n;i++)dis[i]=INF;
    while(q.size()){
        tuple<ll,ll,ll>t=q.top(); q.pop();
        ll src=get<2>(t);
        ll sss=get<0>(t);
        ll diss=get<1>(t);
        dis[src]=min(dis[src],diss);
        if(src==n)continue;
        for(i=1;i<=n;i++){
            if(src==i||ad[i][src]==INF)continue;
            ll S=min(sss,s[i]);
            ll dd=diss+(sss*ad[i][src]);
            if(vis[i][S]>dd){
                vis[i][S]=dd;
                tuple<ll,ll,ll>tt=make_tuple(S,dd,i);
                q.push(tt);
            }
        }
 
       // cout<<"\n";
    }
    cout<<dis[n]<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1;it<=t;it++){
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1915/problem/G