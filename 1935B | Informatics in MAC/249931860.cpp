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
    ll n,i,j; cin>>n;
    ll aa[n]; for(i=0;i<n;i++){
        cin>>aa[i];
    }
    ll mex=0;
    ll pre[n];
    set<ll>st;
    for(i=0;i<n;i++){
        st.insert(aa[i]);
        while(st.find(mex)!=st.end()){
            mex++;
        }
        pre[i]=mex;
    }
 
    st.clear();
    mex=0;
    for(i=n-1;i>0;i--){
        st.insert(aa[i]);
        while(st.find(mex)!=st.end()){
            mex++;
        }
        if(mex==pre[i-1]){
            cout<<"2\n";
            cout<<"1 "<<i<<"\n";
            cout<<i+1<<" "<<n<<"\n";
            return;
        }
    }
    cout<<"-1\n";
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
                //Link: https://codeforces.com/contest/1935/problem/B