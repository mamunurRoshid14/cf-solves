//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve() {
    ll n,c,i,j;
    cin>>n>>c;
    ll aa[n+2];
    for(i=1; i<=n; i++) {
        cin>>aa[i];
    }
    multiset<pair<ll,ll>>st;
    for(i=2;i<=n;i++){
        st.insert({i*c-aa[i],aa[i]});
    }
    ll s=aa[1];
    ll cn=1;
    while(st.size()&&st.begin()->F<=s){
        cn++;
        s+=st.begin()->S;
        st.erase(st.begin());
    }
    if(cn==n){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
 
                //Link: https://codeforces.com/contest/1890/problem/D