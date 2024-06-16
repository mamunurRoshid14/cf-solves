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
void solve() {
    //First, confirm your idea with pen and paper.
    ll a,b,c; cin>>a>>b>>c;
    ll an=0;
    if(a>0)a--,an++;
    if(b>0)b--,an++;
    if(c>0)c--,an++;
    if(a<b)swap(a,b);
    if(a<c)swap(a,c);
    if(a>0&&b>0){
        an++;
        a--,b--;
    }
    if(a>0&&c>0){
        an++;
        a--,c--;
    }
    if(b>0&&c>0){
        an++;
        c--,b--;
    }
 
 
 
    if(a>0&&b>0&&c>0)an++;
 
 
    cout<<an<<"\n";
    return;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1313/problem/A