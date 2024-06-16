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
#define nn "\n"
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 1000006
 
void solve(){
    string aa; cin>>aa;
    ll l=aa.size();
    for(ll i=1;i<aa.size();i++){
        if(aa[i]!='0'){
            l=i; break;
        }
    }
    string bb;
    for(ll i=l;i<aa.size();i++){
        bb.push_back(aa[i]);
    }
    while(aa.size()>l){
        aa.pop_back();
    }
    if((aa.size()==bb.size()&&aa>=bb)||bb.size()==0||aa.size()>bb.size()){
        cout<<"-1\n";
        return;
    }
    cout<<aa<<" "<<bb<<"\n";
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
                //Link: https://codeforces.com/contest/1913/problem/A