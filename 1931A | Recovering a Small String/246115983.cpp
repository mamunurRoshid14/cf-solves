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
    ll s,i,j; cin>>s;
    for(char a='a';a<='z';a++){
        for(char b='a';b<='z';b++){
            for(char c='a';c<='z';c++){
                ll ss=a-'a'+b-'a'+c-'a'+3;
                if(ss==s){
                    cout<<a<<b<<c<<"\n";
                    return;
                }
            }
        }
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
                //Link: https://codeforces.com/contest/1931/problem/A