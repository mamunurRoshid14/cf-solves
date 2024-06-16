//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll int
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define LL_INF (1LL << 62)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
vector<ll>primes;
void seive(){
    ll num[600]; memset(num,0,sizeof num);
    for(ll i=2;i<600;i++){
        if(num[i]==0){
            for(ll j=i+i;j<600;j+=i){
                num[j]=1;
            }
        }
    }
    for(ll i=2;i<600;i++){
        if(num[i]==0){
            primes.push_back(i);
        }
    }
}
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,i,j; cin>>n;
    ll aa[n+2]; for(i=1;i<=n;i++)cin>>aa[i];
    ll s,t; cin>>s>>t;
    vector<vector<ll>>ad(300005);
    vector<vector<ll>>div(n+3);
    for(i=1;i<=n;i++){
        for(auto ii:primes){
            j=ii;
            if(j*j>aa[i])break;
            if(aa[i]%j==0){
                ad[j].push_back(i);
                div[i].push_back(j);
                while(aa[i]%j==0){
                    aa[i]/=j;
                }
            }
        }
        if(aa[i]>1){
            ad[aa[i]].push_back(i);
            div[i].push_back(aa[i]);
        }
    }
    ll pre[n+2]; fill(pre,pre+n+2,0);
    pre[s]=s;
    queue<ll>q;
    q.push(s);
    ll vis[n+2]; memset(vis,0,sizeof vis);
    vis[s]=1;
    bool f=1;
    while(q.size()){
        ll cur=q.front(); q.pop();
        if(cur==t){
            f=0;
            break;
        }
        for(auto ii:div[cur]){
            for(auto iii:ad[ii]){
                if(vis[iii]==0){
                    q.push(iii);
                    vis[iii]=1;
                    pre[iii]=cur;
                }
            }
            ad[ii].clear();
        }
    }
    if(f){
        cout<<"-1\n";
    }
    else{
        vector<ll>an;
        while(pre[t]!=t){
            an.push_back(t);
            t=pre[t];
        }
        an.push_back(t);
        reverse(an.begin(),an.end());
        cout<<an.size()<<"\n";
        for(auto ii:an){
            cout<<ii<<" ";
        }
        cout<<"\n";
    }
    return;
}
 
int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t=1;
    seive();
    //cout<<primes.size()<<"\n";
    //cin >> t;
    for(int it=1;it<=t;it++){
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1775/problem/D