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
void solve() {
    //First, confirm your idea with pen and paper.
    ll n,i,j;
    cin>>n;
    string aa; cin>>aa;
    aa="a"+aa+"a";
    map<ll,ll>mp;
    for(i=1;i<=n;i++){
        if(aa[i-1]!=aa[i]){
            ll cn=1;
            for(j=i+1;j<=n;j++){
                if(aa[j]==aa[i])cn++;
                else break;
            }
            if(cn>1)mp[i]=cn-1;
            i=j-1;
        }
    }
    ll an=0;
    bool f=0;
    for(i=1;i<=n;i++){
        if(aa[i-1]!=aa[i]){
            if(mp.size()){
                an++;
                auto ii=*mp.begin();
                mp.erase(mp.begin());
                if(ii.ss>1){
                    mp[ii.ff]=ii.ss-1;
                }
                while(mp.size()&&mp.begin()->ff<=i)mp.erase(mp.begin());
            }
            else{
                if(f){
                    an++; f=0;
                }
                else f=1;
            }
        }
    }
    if(f)an++;
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
                //Link: https://codeforces.com/contest/1430/problem/D