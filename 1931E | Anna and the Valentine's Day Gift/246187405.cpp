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
    ll n,m,i,j; cin>>n>>m;
    vector<ll>vv;
    ll s=0;
    for(i=0;i<n;i++){
        ll v; cin>>v;
        ll c=0;
        while(v%10==0){
            c++;
            v/=10;
        }
        s+=c;
        while(v){
            s++; v/=10;
        }
        vv.push_back(c);
    }
    sort(vv.rbegin(),vv.rend());
    for(i=0;i<n;i++){
        if(i%2==0){
            s-=vv[i];
        }
    }
    if(s>m){
        cout<<"Sasha\n";
    }
    else{
        cout<<"Anna\n";
    }
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
                //Link: https://codeforces.com/contest/1931/problem/E