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
    ll n,i,j; string aa; cin>>n>>aa;
    for(ll k=n;k>0;k--){
        ll aaa[n],sum[n+2];
        memset(sum,0,sizeof(sum));
        for(j=0;j<n;j++)aaa[j]=aa[j]-'0';
        ll cn=0;
        for(j=0;j<n;j++){
            cn-=sum[j];
            aaa[j]^=(cn&1);
            if(aaa[j]==0){
                if(j+k<=n){
                    cn++;
                    sum[j+k]++;
                    aaa[j]=1;
                }
                else break;
            }
        }
        bool f=1;
        for(j=0;j<n;j++)if(aaa[j]==0)f=0;
        if(f){
            cout<<k<<"\n";
            return;
        }
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
                //Link: https://codeforces.com/contest/1955/problem/E