//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,a,b; cin>>n;
    multiset<pair<ll,ll>,greater<pair<ll,ll>>>st;
    for(i=0;i<n;i++){
        cin>>a>>b;
        st.insert({b,a});
    }
    ll ans=0;
    ll cn=0;
    while(st.size()){
        pair<ll,ll> tm1=*st.begin();
        pair<ll,ll> tm2=*(--st.end());
        if(cn>=tm2.F){
            ans+=tm2.S;
            cn+=tm2.S;
            st.erase(--st.end());
        }
        else{
            b=tm2.F-cn;
            b=min(tm1.S,b);
            ans+=2LL*b;
            cn+=b;
            st.erase(st.begin());
            if(b<tm1.S){
                st.insert({tm1.F,tm1.S-b});
            }
        }
    }
    cout<<ans<<"\n";
}
int main() {
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    //cin>>t;
    for(ll it=1;it<=t;it++){
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1539/problem/D