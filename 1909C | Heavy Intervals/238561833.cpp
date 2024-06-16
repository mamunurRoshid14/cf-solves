//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
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
    ll n,i,j;
    cin>>n;
    ll aa[n+3],bb[n+3],cc[n+3];
    multiset<ll>st2,st3;
    multiset<ll,greater<ll>>st1;
    for(i=0;i<n;i++){
        cin>>aa[i]; st1.insert(aa[i]);
    }
    for(i=0;i<n;i++){
        cin>>bb[i]; st2.insert(bb[i]);
    }
    for(i=0;i<n;i++){
        cin>>cc[i];
        st3.insert(cc[i]);
    }
    sort(aa,aa+n);
    sort(bb,bb+n);
    sort(cc,cc+n);
    reverse(aa,aa+n);
    ll an=0;
    vector<ll>vv;
    for(i=0;i<n;i++){
        ll r=*st2.lower_bound(aa[i]);
        st2.erase(st2.find(r));
        vv.push_back(r-aa[i]);
    }
    sort(vv.rbegin(),vv.rend());
    for(auto ii:vv){
        an+=ii*(*st3.begin()); st3.erase(st3.begin());
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
                //Link: https://codeforces.com/contest/1909/problem/C