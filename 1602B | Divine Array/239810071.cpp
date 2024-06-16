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
    ll n,i,j; cin>>n;
    ll aa[n+2];
    for(i=1;i<=n;i++){
        cin>>aa[i];
    }
    ll bb[n+2][n+2];
    for(i=0;i<=n+2;i++){
        for(j=1;j<=n;j++){
            bb[i][j]=aa[j];
        }
        ll cn[n+2];memset(cn,0,sizeof cn);
        for(j=1;j<=n;j++){
            cn[aa[j]]++;
        }
        for(j=1;j<=n;j++){
            aa[j]=cn[aa[j]];
        }
    }
    ll q; cin>>q; while(q--){
        ll p,x; cin>>p>>x;
        if(x>n)x=n;
        ll an=bb[x][p];
        cout<<an<<"\n";
    }
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
                //Link: https://codeforces.com/contest/1602/problem/B