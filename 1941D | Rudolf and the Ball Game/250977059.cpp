//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define LL_INF (1LL << 62)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,m,x,i,j; cin>>n>>m>>x;
    set<ll>st; st.insert(x);
    for(i=0;i<m;i++){
        ll r; char mov;
        cin>>r>>mov;
        vector<ll>vv;
        for(auto ii:st)vv.push_back(ii);
        st.clear();
        if(mov=='0'){
            for(auto ii:vv){
                ll next=(ii+r)%n;
                if(next==0)next=n;
                st.insert(next);
            }
        }
        else if(mov=='1'){
            for(auto ii:vv){
                ll next=(ii-r+n+n)%n;
                if(next==0)next=n;
                st.insert(next);
            }
        }
        else{
            for(auto ii:vv){
                ll next=(ii+r)%n;
                if(next==0)next=n;
                st.insert(next);
            }
            for(auto ii:vv){
                ll next=(ii-r+n+n)%n;
                if(next==0)next=n;
                st.insert(next);
            }
        }
    }
    cout<<st.size()<<"\n";
    for(auto ii:st){
        cout<<ii<<" ";
    }
    cout<<"\n";
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
                //Link: https://codeforces.com/contest/1941/problem/D