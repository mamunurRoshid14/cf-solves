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
#define mod 998244353
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,i,j,k; cin>>n;
    for(i=0;i<=n;i+=3){
        for(j=0;j<=n;j+=5){
                if(i+j>n)break;
            for(k=0;k<=n;k+=7){
                if(i+j+k>n)break;
                if(i+j+k==n){
                    cout<<i/3<<" "<<j/5<<" "<<k/7<<"\n";
                    return;
                }
            }
        }
    }
    cout<<"-1\n";
 
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
                //Link: https://codeforces.com/contest/1430/problem/A