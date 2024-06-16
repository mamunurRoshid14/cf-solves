//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp> // Including tree_order_statistics_node_update
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
typedef tree< int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update> ordered_set;
 
 
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
    ordered_set st;
    ll n,i,j; cin>>n;
    vector<pll>v;
    for(i=0;i<n;i++){
        ll l,r; cin>>l>>r;
        v.pb({l,r});
        st.insert(r);
    }
    sort(v.begin(),v.end());
    ll an=0;
    for(auto ii:v){
        ll tm=st.order_of_key(ii.ss);
        an+=tm;
        st.erase(st.find_by_order(tm));
    }
    cout<<an<<"\n";
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
                //Link: https://codeforces.com/contest/1915/problem/F