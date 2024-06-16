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
 
map<vector<ll>,vector<ll>>mp;
map<ll,vector<ll>>mpp;
void solve(){
    //First, confirm your idea with pen and paper.
 
    ll n,i,j; cin>>n;
    if(n<=11){
        for(i=0;i<n;i++){
            cout<<mpp[n][i]<<"\n";
        }
        return;
    }
    for(i=0;i<n;i++){
        cout<<mpp[11][i];
        for(j=11;j<n;j++){
            cout<<"0";
        }
        cout<<"\n";
    }
    return;
}
 
vector<ll> f(ll num){
    vector<ll>st;
    while(num){
        st.pb(num%10);num/=10;
    }
    sort(st.begin(),st.end());
    return st;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    for(ll i=1;i<=300000;i++){
        ll num=i*i;
        mp[f(num)].push_back(num);
    }
    for(auto ii:mp){
        ll sz=((ll)ii.ff.size());
        ll szz=((ll)ii.ss.size());
        if(mpp[sz].size()<szz){
            mpp[sz]=ii.ss;
        }
    }
    mp.clear();
 
    cin >> t;
    for(int it=1;it<=t;it++){
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1916/problem/D