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
    ll n,i,j,k; cin>>n>>k;
    ll aa[n]; for(i=0;i<n;i++)cin>>aa[i];
    sort(aa,aa+n);
    if(aa[0]==aa[n-1])cout<<"0\n";
    else if((aa[0]>k&&aa[n-1]>k)||(aa[0]<k&&aa[n-1]<k)){
        ll ans=0;
        ll gc=0;
        for(i=0;i<n;i++){
            gc=gcd(gc,aa[i]-k);
        }
        if(aa[0]<k)gc=-gc;
        for(i=0;i<n;i++){
            ans+=((aa[i]-k-gc)/gc);
        }
        cout<<ans<<"\n";
    }
    else{
        cout<<"-1\n";
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
                //Link: https://codeforces.com/contest/1909/problem/D