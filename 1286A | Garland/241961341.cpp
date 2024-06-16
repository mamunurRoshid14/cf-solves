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
#define INF (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 103
 
ll dp[N][N][N][2];
ll n; ll aa[N];
void print(vector<ll>v){
    for(auto ii:v)cout<<ii<<" ";cout<<"\n\n";
}
ll f(ll p,ll cn0, ll cn1, ll pre){
    if(cn0<0||cn1<0)return LL_INF;
    if(p>n)return 0;
    if(dp[p][cn0][cn1][pre]!=-1)return dp[p][cn0][cn1][pre];
   // print({p,cn0,cn1,pre});
    if(aa[p]==0){
        ll c1=f(p+1,cn0-1,cn1,0)+(pre!=0);
        ll c2=f(p+1,cn0,cn1-1,1)+(pre!=1);
        return dp[p][cn0][cn1][pre]=min(c1,c2);
    }
    else{
       return dp[p][cn0][cn1][pre]=f(p+1,cn0,cn1,aa[p]%2)+(aa[p]%2!=pre);
    }
}
void solve(){
    //First, confirm your idea with pen and paper.
    cin>>n;
    ll i;
    ll cn0=0,cn1=0;
    ll bb[N]; memset(bb,0,sizeof bb);
    memset(dp,-1,sizeof dp);
    for(i=1;i<=n;i++){
        cin>>aa[i]; bb[aa[i]]=1;
    }
    for(i=1;i<=n;i++){
        if(bb[i]==0){
            if(i%2)cn1++;
            else cn0++;
        }
    }
    if(aa[1]>0){
        cout<<f(1,cn0,cn1,aa[1]%2);
    }
    else {
        ll a=f(2,cn0-1,cn1,0);
        ll b=f(2,cn0,cn1-1,1);
        cout<<min(a,b)<<"\n";
    }
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    //cin >> t;
    for(int it=1;it<=t;it++){
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1286/problem/A