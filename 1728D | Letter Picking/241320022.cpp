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
#define N 2006
string aa;
ll dp[N][N];
ll f(ll l, ll r){
    if(l+1==r){
        return dp[l][r]=(aa[l]==aa[r]);
    }
    if(dp[l][r]!=-1)return dp[l][r];
    //alice l
    ll p1=f(l+2,r);//bob l+1
    if(p1==1){
        if(aa[l]<aa[l+1])p1=0;
        if(aa[l]>aa[l+1])p1=2;
    }
    ll p2=f(l+1,r-1); //bob r
    if(p2==1){
        if(aa[l]<aa[r])p2=0;
        if(aa[l]>aa[r])p2=2;
    }
    //alice r
    ll p3=f(l+1,r-1);//bob l
    if(p3==1){
        if(aa[r]<aa[l])p3=0;
        if(aa[r]>aa[l])p3=2;
    }
    ll p4=f(l,r-2); //bob r-1
    if(p4==1){
        if(aa[r]<aa[r-1])p4=0;
        if(aa[r]>aa[r-1])p4=2;
    }
    return dp[l][r]=min(max(p1,p2),max(p3,p4));
}
void solve(){
    //First, confirm your idea with pen and paper.
    cin>>aa;
    ll n=aa.size(),i,j;
    for(i=0;i<=n;i++)for(j=0;j<=n;j++)dp[i][j]=-1;
    ll p=f(0,n-1);
    if(p==0)cout<<"Alice\n";
    else if(p==1)cout<<"Draw\n";
    else cout<<"Bob\n";
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
                //Link: https://codeforces.com/contest/1728/problem/D