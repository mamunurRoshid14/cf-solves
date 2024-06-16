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
    ll n,i,j; cin>>n;
    n+=n; ll aa[n]; for(i=0;i<n;i++) cin>>aa[i];
    sort(aa,aa+n);
    for(i=0;i<n-1;i++){
        ll x=aa[i]+aa[n-1];
        multiset<ll>st;
        for(j=0;j<n;j++){
            st.insert(aa[j]);
        }
        vector<pll>v;
        ll mx=*(--st.end());
        st.erase(--st.end());
        while(st.find(x-mx)!=st.end()){
            v.push_back({mx,x-mx});
            st.erase(st.find(x-mx));
            if(st.size()==0)continue;
            x=mx;
            mx=*(--st.end());
            st.erase(--st.end());
        }
        if(st.empty()){
            cout<<"YES\n";
            cout<<aa[i]+aa[n-1]<<"\n";
            for(auto ii:v){
                cout<<ii.ff<<" "<<ii.ss<<"\n";
            }
            return;
        }
    }
    cout<<"NO\n";
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
                //Link: https://codeforces.com/contest/1474/problem/C