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
    ll aa[n]; for(i=0;i<n;i++)cin>>aa[i];
    set<ll>st; st.insert(0);
    ll s1=0;
    for(i=0;i+1<n;i+=2){
        s1+=aa[i];
        if(st.find(s1)!=st.end()){
            cout<<"YES\n";
            return;
        }
        st.insert(s1);
        s1-=aa[i+1];
        if(st.find(s1)!=st.end()){
            cout<<"YES\n";
            return;
        }
        st.insert(s1);
 
    }
    if(n%2){
        s1+=aa[n-1];
        if(st.find(s1)!=st.end()){
            cout<<"YES\n";
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
                //Link: https://codeforces.com/contest/1915/problem/E