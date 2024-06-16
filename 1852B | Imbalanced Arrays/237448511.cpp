//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define CC(x) cout << "Case " << ++x << ":";
#define nn "\n"
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 1000006
 
void solve(){
    ll n,i,j; cin>>n;
    vector<pll>v;
    for(i=0;i<n;i++){
        cin>>j; v.push_back({j,i});
    }
    sort(v.begin(),v.end());
    ll bb[n]; bool f=1;
    for(ll cn=n,i=0,j=n-1;cn>0;cn--){
        if(v[i].ff==n-j-1){
            bb[v[i++].ss]=-cn;
        }
        else if(v[j].ff==n-i){
            bb[v[j--].ss]=cn;
        }
        else{
            f=0;
            break;
        }
    }
    if(f){
        cout<<"YES\n";
        for(i=0;i<n;i++)cout<<bb[i]<<" "; cout<<"\n";
    }
    else{
        cout<<"NO\n";
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
                //Link: https://codeforces.com/contest/1852/problem/B