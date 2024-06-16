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
void solve() {
    //First, confirm your idea with pen and paper.
    ll n,k,pb,ps,i,j; cin>>n>>k>>pb>>ps;
    ll pp[n+2],aa[n+2];
    for(i=1;i<=n;i++){
        cin>>pp[i];
    }
    for(i=1;i<=n;i++){
        cin>>aa[i];
    }
    vector<ll>vb,vs;
    vb.push_back(0);
    vs.push_back(0);
    ll vis[n+2];
    memset(vis,0,sizeof(vis));
    while(vis[pb]==0){
        vis[pb]=1;
        vb.push_back(aa[pb]);
        pb=pp[pb];
    }
 
 
    memset(vis,0,sizeof(vis));
    while(vis[ps]==0){
        vis[ps]=1;
        vs.push_back(aa[ps]);
        ps=pp[ps];
    }
 
    ll mb=0,ms=0;
    ll s=0;
    for(i=1;i<vb.size()&&i<=k;i++){
        ll c=s+(vb[i]*(k-i+1));
        s+=vb[i];
        mb=max(mb,c);
    }
    s=0;
    for(i=1;i<vs.size()&&i<=k;i++){
        ll c=s+(vs[i]*(k-i+1));
        s+=vs[i];
        ms=max(ms,c);
    }
    if(ms>mb){
        cout<<"Sasha\n";
    }
    else if(ms<mb){
        cout<<"Bodya\n";
    }
    else{
        cout<<"Draw\n";
    }
 
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
                //Link: https://codeforces.com/contest/1968/problem/D