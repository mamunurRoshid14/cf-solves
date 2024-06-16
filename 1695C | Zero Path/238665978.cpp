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
#define N 200006
 
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,m,i,j; cin>>n>>m;
    ll aa[n+2][m+2];
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            cin>>aa[i][j];
        }
    }
    if((n+m-1)%2){
        cout<<"NO\n";
        return;
    }
 
    ll st[n+3][m+3][2];
    ll s=0;
    for(i=1;i<=m;i++){
        s+=aa[1][i]; st[1][i][0]=s; st[1][i][1]=s;
    }
    s=0;
    for(i=1;i<=n;i++){
        s+=aa[i][1];  st[i][1][0]=s; st[i][1][1]=s;
    }
    for(i=2;i<=n;i++){
        for(j=2;j<=m;j++){
            st[i][j][0]=min(st[i-1][j][0],st[i][j-1][0])+aa[i][j];
            st[i][j][1]=max(st[i-1][j][1],st[i][j-1][1])+aa[i][j];
        }
    }
    if(st[n][m][0]>0||st[n][m][1]<0)cout<<"NO\n";
    else cout<<"YES\n";
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
                //Link: https://codeforces.com/contest/1695/problem/C