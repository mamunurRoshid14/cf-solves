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
    ll x,k; cin>>x>>k;
    ll i,j; vector<pll>v[k+1];
    for(i=1;i<=k;i++){
        ll l; cin>>l; vector<ll>tm;
        for(j=0;j<l;j++){
            ll a; cin>>a;
            tm.push_back(a);
        }
        ll s=0;
        ll mn=LL_INF;
        for(j=0;j<l;j++){
            s+=tm[j];
            mn=min(mn,s);
            if(s>0){
                v[i].push_back({mn,s});
                s=0;
                mn=LL_INF;
            }
        }
        v[i].push_back({mn,s});
        reverse(v[i].begin(),v[i].end());
    }
    ll an=x;
    multiset<tuple<ll,ll,ll>,greater<tuple<ll,ll,ll>>>st;
    for(i=1;i<=k;i++)st.insert({v[i].back().ff,v[i].back().ss,i}),v[i].pop_back();
    while(st.size()){
        auto tm=*st.begin();
        st.erase(st.begin());
       // cout<<"F   "<<get<0>(tm)<<"  "<<get<1>(tm)<<"  "<<get<2>(tm)<<"\n";
        if((x+get<0>(tm))<0){
            break;
        }
        if(get<1>(tm)<0) continue;
        x+=get<1>(tm);
        an=max(x,an);
        if(v[get<2>(tm)].size()){
            st.insert({v[get<2>(tm)].back().ff,v[get<2>(tm)].back().ss,get<2>(tm)}),v[get<2>(tm)].pop_back();
        }
    }
    cout<<an<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    //cin >> t;
    for(int it=1;it<=t;it++){
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1912/problem/A