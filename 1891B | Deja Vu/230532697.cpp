//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,q,i,j; cin>>n>>q;
    ll aa[n+2],xx[q+2];
    for(i=1;i<=n;i++){
        cin>>aa[i];
    }
    for(i=1;i<=q;i++){
        cin>>xx[i];
    }
    set<ll>st;
    for(i=1;i<=n;i++){
        st.insert(i);
    }
 
    for(i=1;i<=n;i++){
        if(aa[i]%2){
            st.erase(i);
        }
    }
    ll pow[55];
    pow[0]=1;
    for(i=1;i<=55;i++){
        pow[i]=pow[i-1]*2LL;
    }
    ll mx=INT_MAX;
    for(i=1;i<=q;i++){
        if(mx<=xx[i])continue;
        mx=xx[i];
        ll num=pow[xx[i]];
        vector<ll>vv;
        for(auto ii:st){
            ll in=ii;
            if(aa[in]%num==0){
                aa[in]+=(pow[xx[i]-1]);
            }
            if(aa[in]%2){
                vv.push_back(in);
            }
        }
        for(auto ii:vv){
            st.erase(ii);
        }
    }
    for(i=1;i<=n;i++){
        cout<<aa[i]<<" ";
    }
    cout<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1;it<=t;it++){
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
 
                //Link: https://codeforces.com/contest/1891/problem/B