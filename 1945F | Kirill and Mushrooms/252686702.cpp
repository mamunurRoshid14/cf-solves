//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ll int
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define LL_INF (1LL << 62)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
 
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;
 
template<typename temp>using ordered_set = tree<temp, null_type, greater_equal<temp>, rb_tree_tag,tree_order_statistics_node_update>;
//order_of_key(k)  : Number of items strictly smaller than k .
//find_by_order(k) : K-th element in a set (counting from zero).//*(ost.find_by_order(k))
 
#define PI acos(-1)
#define ll long long
 
//int dx[]={-1,1,0,0};
//int dy[]={0,0,-1,1};
//int dx[]={-1,0,1,-1,1,-1,0,1};
//int dy[]={1,1,1,0,0,-1,-1,-1};
 
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,i,j; cin>>n;
    ll aa[n+2],bb[n+2];
    for(i=1;i<=n;i++)cin>>aa[i];
    for(i=1;i<=n;i++)cin>>bb[i];
    ll an=-1;ll l=0;
    ordered_set<ll> ost;
    for(i=n;i>0;i--){
        ost.insert(aa[bb[i]]);
        ll len=i;
        if(n-i+1<len)continue;
        ll cur=len*(*ost.find_by_order(len-1));
        if(an<cur){
            an=cur;
            l=len;
        }
        else if(an==cur){
            l=min(l,len);
        }
    }
    cout<<an<<" "<<l<<"\n";
 
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
 
                //Link: https://codeforces.com/contest/1945/problem/F