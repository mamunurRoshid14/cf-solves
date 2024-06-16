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
    ll n,m,i,j; string aa; cin>>n>>m>>aa;
    string bb="abc";
    ll pre[6][n+2]; memset(pre,0,sizeof pre);
    ll in=0;
    do
    {
        for(i=0;i<n;i++){
            if(aa[i]==bb[i%3])pre[in][i+1]=0;
            else pre[in][i+1]=1;
            pre[in][i+1]+=pre[in][i];
        }
        in++;
    } while (next_permutation(bb.begin(),bb.end()));
    while(m--){
        ll l,r; cin>>l>>r;
        ll an=LL_INF;
        for(i=0;i<6;i++){
            ll tm=pre[i][r]-pre[i][l-1];
            an=min(tm,an);
        }
        cout<<an<<"\n";
    }
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
   // cin >> t;
    for(int it=1;it<=t;it++){
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1555/problem/D