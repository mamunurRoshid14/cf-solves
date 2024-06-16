//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,m,d,i; cin>>n>>m>>d;
    ll ans=0;
    multiset<ll>st;
    ll sum=0;
    for(i=1;i<=n;i++){
        if(st.size()>=m){
            ll a=*st.begin();
            sum-=a;
            st.erase(st.begin());
        }
        ll tm; cin>>tm;
        sum+=tm;
        ans=max(ans,sum-i*d);
        if(tm>0){
            st.insert(tm);
        }
        else{
            sum-=tm;
        }
    }
    cout<<ans<<"\n";
}
int main() {
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1;it<=t;it++){
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
 
 
                //Link: https://codeforces.com/contest/1862/problem/E