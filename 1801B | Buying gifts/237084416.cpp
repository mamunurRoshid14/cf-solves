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
    ll n,i,j; cin>>n;
    vector<pll> v; ll a,b;
    multiset<ll>st1,st2;
    st2.insert(-LL_INF);
    st2.insert(LL_INF);
    for(i=0;i<n;i++){
        cin>>a>>b;
        v.push_back(make_pair(a,b));
        st2.insert(b);
    }
    sort(v.begin(),v.end());
    ll an=LL_INF;
    for(i=0;i<n-1;i++){
        an=min(an,abs(v[n-1].ff-v[i].ss));
    }
    ll mx=v[n-1].ss;
    for(i=n-2;i>=0;i--){
        st2.erase(st2.find(v[i].ss));
        ll a=*(st2.lower_bound(v[i].ff));
        ll b=*(--st2.lower_bound(v[i].ff));
        ll tm;
        if(abs(v[i].ff-a)<=abs(v[i].ff-b)){
            tm=a;
        }
        else tm=b;
        st2.insert(v[i].ss);
        tm=max(tm,mx);
        an=min(an,abs(v[i].ff-tm));
        mx=max(mx,v[i].ss);
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
                //Link: https://codeforces.com/contest/1801/problem/B