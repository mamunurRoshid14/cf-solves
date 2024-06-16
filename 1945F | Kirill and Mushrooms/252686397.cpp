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
 
template<typename temp>using ordered_set = tree<temp, null_type, less_equal<temp>, rb_tree_tag,tree_order_statistics_node_update>;
//order_of_key(k)  : Number of items strictly smaller than k .
//find_by_order(k) : K-th element in a set (counting from zero).//*(ost.find_by_order(k))
 
#define PI acos(-1)
#define ll long long
 
//int dx[]={-1,1,0,0};
//int dy[]={0,0,-1,1};
//int dx[]={-1,0,1,-1,1,-1,0,1};
//int dy[]={1,1,1,0,0,-1,-1,-1};
 
const int M=3e5+5;
const int N=2e6+5;
const int mod=1e9+7;
 
int p[M],v[M];
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;
    while(t--) {
        int n;cin >> n;
        for(int i=1;i<=n;i++)cin >> v[i];
        for(int i=1;i<=n;i++)cin >> p[i];
        ordered_set<int>ost;
        ll ans=0; int k=INT32_MAX;
        for(int i=n;i;i--) {
            ost.insert(v[p[i]]);
            if((int)ost.size() < i)continue;
            ll tmp=1ll*i*(*ost.find_by_order((int)ost.size()-i));
            if(tmp >= ans)ans=tmp, k=i;
        }
        cout << ans << ' ' << k << '\n';
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1945/problem/F