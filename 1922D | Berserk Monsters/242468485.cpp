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
    ll aa[n+3],dd[n+3];
    aa[0]=0,aa[n+1]=0;
    dd[0]=LL_INF,dd[n+1]=LL_INF;
    for(i=1;i<=n;i++)cin>>aa[i];
    for(i=1;i<=n;i++)cin>>dd[i];
    set<ll>active,alive;
    for(i=1;i<=n;i++)active.insert(i);
    for(i=0;i<=n+1;i++)alive.insert(i);
    for(i=1;i<=n;i++){
        vector<array<ll,3>>v;
        for(auto ii:active){
            auto it=alive.find(ii);
            ll l=*(--it);
            it++;
            ll r=*(++it);
            if(aa[l]+aa[r]>dd[ii]){
                v.push_back({ii,l,r});
            }
        }
        for(auto ii:v){
            alive.erase(ii[0]);
        }
        active.clear();
        for(auto ii:v){
            if(alive.find(ii[1])!=alive.end()&&ii[1]>0){
                active.insert(ii[1]);
            }
            if(alive.find(ii[2])!=alive.end()&&ii[2]<=n){
                active.insert(ii[2]);
            }
        }
        cout<<v.size()<<" ";
    }
    cout<<"\n";
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
                //Link: https://codeforces.com/contest/1922/problem/D