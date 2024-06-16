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
    ll ff[50]; ll q,i; cin>>q;
    memset(ff,0,sizeof ff);
    while(q--){
        ll c; cin>>c;
        if(c==1){
            ll v; cin>>v;
            ff[v]++;
            for(i=0;i<35;i++){
                if(ff[i]>2){
                    ff[i]=1;
                    ff[i+1]++;
                }
            }
        }
        else{
            ll v; cin>>v;
            multiset<ll,greater<ll>>st;
            ll tm=1;
            for(i=0;i<31;i++){
                if(ff[i]==1){
                    st.insert(tm);
                }
                else if(ff[i]==2){
                    st.insert(tm);
                    st.insert(tm);
                }
                tm*=2LL;
            }
            while(st.size()){
                ll dd=*st.begin();
                st.erase(st.begin());
                if(v>=dd){
                    v-=dd;
                }
            }
            if(v==0){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
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
                //Link: https://codeforces.com/contest/1913/problem/C