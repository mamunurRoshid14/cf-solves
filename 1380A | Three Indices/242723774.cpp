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
    ll n,i,j; cin>>n;
    ll aa[n];
    for(i=0;i<n;i++)cin>>aa[i];
    ll x,y,z;
    for(i=1;i<n-1;i++){
        x=-1,z=-1;
        for(j=i-1;j>=0;j--){
            if(aa[j]<aa[i])x=j;
        }
        for(j=i+1;j<n;j++){
            if(aa[j]<aa[i])z=j;
        }
        if(x>=0&&z>=0){
            cout<<"YES\n";
            cout<<x+1<<" "<<i+1<<" "<<z+1<<"\n";
            return;
        }
    }
    cout<<"NO\n";
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
                //Link: https://codeforces.com/contest/1380/problem/A