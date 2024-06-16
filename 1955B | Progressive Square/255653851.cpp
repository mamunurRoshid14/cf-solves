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
void solve() {
    //First, confirm your idea with pen and paper.
    ll n,c,d,i,j;
    cin>>n>>c>>d;
    multiset<ll>st;
    ll nn=n*n;
    ll aa[n][n];
    for(i=0; i<nn; i++) {
        ll tm;
        cin>>tm;
        st.insert(tm);
    }
    aa[0][0]=*st.begin();
    st.erase(st.begin());
    for(i=1; i<n; i++) {
        ll tm=aa[i-1][0]+c;
        if(st.find(tm)==st.end()) {
            cout<<"NO\n";
            return;
        }
        aa[i][0]=tm;
        st.erase(st.find(tm));
    }
    for(i=0; i<n; i++) {
        for(j=1; j<n; j++) {
            ll tm=aa[i][j-1]+d;
            if(st.find(tm)==st.end()) {
                cout<<"NO\n";
                return;
            }
            aa[i][j]=tm;
            st.erase(st.find(tm));
        }
    }
    cout<<"YES\n";
 
    return;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1955/problem/B