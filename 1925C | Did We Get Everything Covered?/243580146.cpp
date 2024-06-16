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
    ll n,k,m,i,j; cin>>n>>k>>m;
    string aa; cin>>aa;
    set<char>st;
    string an="";
    for(auto ii:aa){
        st.insert(ii);
        if(st.size()==k){
            an.push_back(ii);
            st.clear();
        }
    }
    if(an.size()>=n){
        cout<<"YES\n";
        return;
    }
    for(i=an.size();i<n;i++){
        for(char a='a';a-'a'<k;a++){
            if(st.find(a)==st.end()){
                an.push_back(a);
                break;
            }
        }
    }
    cout<<"NO\n";
    cout<<an<<"\n";
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
                //Link: https://codeforces.com/contest/1925/problem/C