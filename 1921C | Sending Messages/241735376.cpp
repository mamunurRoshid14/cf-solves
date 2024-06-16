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
    ll n,f,a,b,i,j; cin>>n>>f>>a>>b;
    ll aa[n+2]; aa[0]=0;
    for(i=1;i<=n;i++)cin>>aa[i];
    bool F=1;
    for(i=1;i<=n;i++){
        ll c1=(aa[i]-aa[i-1])*a;
        ll c2=b;
        f-=min(c1,c2);
        if(f<=0){
            F=0; break;
        }
    }
    if(F)cout<<"YES\n";
    else cout<<"NO\n";
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
                //Link: https://codeforces.com/contest/1921/problem/C