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
    ll n,c,i,j; cin>>n>>c;
    ll cc[c+3],aa[n+3]; aa[0]=0;
    fill(cc,cc+c+3,0);
    for(i=1;i<=n;i++){
        cin>>aa[i]; cc[aa[i]]=1;
    }
    sort(aa,aa+n+1);
    vector<ll>v;
    for(i=1;i<=c;i++){
        if(cc[i]==0)v.pb(i);
        cc[i]+=cc[i-1];
    }
    bool f=1;
    for(i=1;i<=n;i++){
        if(aa[i]==aa[i-1])continue;
        ll y=aa[i];
        for(auto ii:v){
            ll l=y*ii,r=(ii+1)*y-1;
            if(l>c)break; r=min(c,r);
            if(cc[r]-cc[l-1])f=0;
        }if(!f)break;
    }
    if(f)cout<<"Yes\n";
    else cout<<"No\n";
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
                //Link: https://codeforces.com/contest/1648/problem/B