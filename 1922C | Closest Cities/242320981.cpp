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
 
ll add(ll b, ll c){
    if(LL_INF-b<c) return LL_INF+1;
    return b+c;
}
ll mul(ll b, ll c){
    if(LL_INF/b<c) return LL_INF+1;
    return b*c;
}
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,m,i,j; cin>>n;
    ll aa[n+3],bb[n+3],cc[n+3];
    memset(bb,0,sizeof bb);
    memset(cc,0,sizeof cc);
    for(i=1;i<=n;i++)cin>>aa[i];
    aa[0]=-LL_INF; aa[n+1]=LL_INF;
    for(i=1;i<n;i++){
        if(abs(aa[i]-aa[i-1])>abs(aa[i]-aa[i+1])){
            bb[i+1]=bb[i]+1;
        }
        else{
            bb[i+1]=bb[i]+(-aa[i]+aa[i+1]);
        }
    }
    //for(i=1;i<=n;i++)cout<<bb[i]<<" ";cout<<"\n";
    for(i=n;i>0;i--){
        if(abs(aa[i]-aa[i-1])>abs(aa[i]-aa[i+1])){
            cc[i-1]=cc[i]+aa[i]-aa[i-1];
        }
        else{
            cc[i-1]=cc[i]+1;
        }
    }
    cin>>m;
    while(m--){
        ll l,r; cin>>l>>r;
        if(l<=r){
            cout<<bb[r]-bb[l]<<"\n";
        }
        else{
            cout<<cc[r]-cc[l]<<"\n";
        }
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
                //Link: https://codeforces.com/contest/1922/problem/C