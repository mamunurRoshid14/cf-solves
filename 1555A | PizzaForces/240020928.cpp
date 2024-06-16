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
vector<ll>v={6,8,10};
vector<ll>v2={15,20,25};
 
ll f(ll n,ll p){
    if(p==3){
        if(n<=6)return 15;
        else return LL_INF;
    }
    if(n<=0) return 0;
 
    ll tm=n/v[p];
    ll an=LL_INF;
    if(tm){
        tm--;
        an=f(n-tm*v[p],p+1)+v2[p]*tm;
        tm++;
    }
    ll an1=f(n-tm*v[p],p+1)+v2[p]*tm;
    tm++;
    ll an2=f(n-tm*v[p],p+1)+v2[p]*tm;
    return min(an1,min(an,an2));
}
void solve(){
    //First, confirm your idea with pen and paper.
    ll n; cin>>n;
    ll an=f(n,0);
    cout<<an<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    reverse(v.begin(),v.end());
    reverse(v2.begin(),v2.end());
    cin >> t;
    for(int it=1;it<=t;it++){
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1555/problem/A