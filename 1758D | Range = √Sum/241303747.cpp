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
    if(n%2==0){
        ll c=n/2;
        for(i=c;i<n;i++){
            cout<<i<<" "<<2*n-i<<" ";
        }cout<<"\n";
        return;
    }
    vector<ll>v;
    for(i=(n+1)/2;i<(n+1)/2+n;i++)v.pb(i);
    v[0]-=1; v[n-1]+=1;
    v[n-2]++;
    for(auto ii:v)cout<<ii+2<<" "; cout<<"\n";
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
                //Link: https://codeforces.com/contest/1758/problem/D