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
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 1000006
 
void solve(){
    ll n,i,j; cin>>n;
    ll aa[n+2];
    ll f[n+3]; memset(f,0,sizeof f);
    ll mex=0,an=0;
    deque<pll>dq;
    for(i=1;i<=n;i++){
        cin>>aa[i];
        f[aa[i]]=1;
        while(f[mex]){
            mex++;
        }
        an+=mex;
        dq.push_back({mex,1});
    }
    ll mx=an;
    for(i=1;i<=n;i++){
        ll cn=0;
 
        auto ii=dq.front();
        dq.pop_front();
        an-=ii.ff;
        if(ii.ss>1){
            dq.push_front({ii.ff,ii.ss-1});
        }
        while(dq.size()&&dq.back().ff>aa[i]){
            an-=(dq.back().ff*dq.back().ss);
            cn+=dq.back().ss;
            dq.pop_back();
        }
        if(cn>0){
            an+=aa[i]*(cn);
            dq.push_back({aa[i],cn});
        }
        an+=n;
        dq.push_back({n,1});
        mx=max(an,mx);
    }
    cout<<mx<<"\n";
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
                //Link: https://codeforces.com/contest/1905/problem/D