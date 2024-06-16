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
    string aa; cin>>aa;
    map<char,ll>mp;
    for(auto ii:aa){
        mp[ii]++;
    }
    if(mp['R']>=mp['S']&&mp['R']>=mp['P']){
        for(auto ii:aa){
            cout<<'P';
        }
    }
    else if(mp['S']>=mp['R']&&mp['S']>=mp['P']){
        for(auto ii:aa){
            cout<<'R';
        }
    }
    else{
        for(auto ii:aa){
            cout<<'S';
        }
    }cout<<"\n";
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
                //Link: https://codeforces.com/contest/1380/problem/B