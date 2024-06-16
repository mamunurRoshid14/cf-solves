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
    string aa; cin>>aa;
    if(aa[0]!='1'){
        cout<<"NO\n";
        return;
    }
    if(aa.back()=='9'){
        cout<<"NO\n";
        return;
    }
    for(ll i=1;i<aa.size()-1;i++){
        if(aa[i]=='0'){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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
                //Link: https://codeforces.com/contest/1984/problem/B