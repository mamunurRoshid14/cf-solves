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
#define mod 998244353\
 
ll n;
string aa[2];
ll dp[2][2][200005];//st,r,c
ll vis[2][2][200005];
ll cn=5;
ll f(ll st,ll r,ll c){
    if(c>=n||c<0||r<0||r>1||st<0||st>1)return 0;
    if(st==0&&r==1&&c==n-1)return 1;
    if(vis[st][r][c])return 0;
    vis[st][r][c]=1;
    if(dp[st][r][c]!=-1)return dp[st][r][c];
 
    if(st==0){
        if(r==0){
            return dp[st][r][c]=max(f(1,0,c+1),f(1,1,c));
        }
        else{
            return dp[st][r][c]=max(f(1,0,c),f(1,1,c+1));
        }
    }
    else{
        if(aa[r][c]=='<'){
            return dp[st][r][c]=f(0,r,c-1);
        }
        else{
            return dp[st][r][c]=f(0,r,c+1);
        }
    }
    cout<<dp[st][r][c]<<"\n";
}
void solve(){
    //First, confirm your idea with pen and paper.
    cin>>n;
    ll i,j;
    for(i=0;i<=n;i++){
        dp[0][0][i]=-1;
        dp[0][1][i]=-1;
        dp[1][0][i]=-1;
        dp[1][1][i]=-1;
 
        vis[0][0][i]=0;
        vis[0][1][i]=0;
        vis[1][0][i]=0;
        vis[1][1][i]=0;
    }
    cin>>aa[0]>>aa[1];
    ll an=f(0,0,0);
    if(an)cout<<"YES\n";
    else cout<<"NO\n";
    return;
}
int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1;it<=t;it++){
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1948/problem/C