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
    ll mn=-LL_INF,mx=LL_INF;
    set<ll>st;
    while(n--){
        ll c,v; cin>>c>>v;
        if(c==1){
            mn=max(mn,v);
        }
        else if(c==2){
            mx=min(mx,v);
        }
        else st.insert(v);
    }
    if(mx<mn){
        cout<<"0\n";
        return;
    }
    ll cn=mx-mn+1;
    for(auto ii:st){
        if(ii>=mn&&ii<=mx)cn--;
    }
    cout<<cn<<"\n";
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
                //Link: https://codeforces.com/contest/1920/problem/A