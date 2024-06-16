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
#define SetBit(x, k) (x |= (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 1000006
 
int cnt(vector<int> v, int d = 0){
    vector<int> z = v;
    sort(z.begin(), z.end());
 
    if(v==z) return 0;
 
    vector<int> x;
    for(int i = v.size()-1; i >= 0; i--){
        int prev = (x.empty()) ? v[0] : x.back();
        if(d==0){
            if(v[i] <= prev){
                x.pb(v[i]);
                v.pop_back();
            }
            else break;
        }
        else {
            if(v[i] >= prev){
                x.pb(v[i]);
                v.pop_back();
            }
            else break;
        }
    }
 
    reverse(x.begin(), x.end());
    int c = x.size();
    for(int i = 0; i < v.size(); i++){
        x.pb(v[i]);
    }
 
    if(x==z) return c;
    else {
        reverse(x.begin(), x.end());
        if(x==z) return c+1;
        else return INF;
    }
    return INF;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int t;
    cin >> t;
 
    while(t--){
        int n;
        cin >> n;
 
        vector<int> v(n);
 
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
 
        int ans = cnt(v);
        ans = min(ans, cnt(v, 1));
        reverse(v.begin(), v.end());
        ans = min(ans, 1+cnt(v));
        ans = min(ans, 1+cnt(v, 1));
 
        if(ans==INF) cout << -1 << nn;
        else {
            cout << ans << nn;
        }
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1907/problem/F