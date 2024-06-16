//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j; cin>>n;
    set<ll>st;
    for(i=0;i<n;i++){
        ll tm; cin>>tm;
        st.insert(tm);
    }
    ll nn=2*n+1;
    ll cn=2*n;
    set<ll>st2;
    for(i=0;i<nn+nn;i++){
        st2.insert(i);
    }
    for(auto ii:st){
        if(st2.find(ii)!=st2.end()){
            st2.erase(ii);
        }
    }
    for(i=0;i<nn;i++){
        ll a=*st2.begin();
        cout<<a<<endl;
        ll y; cin>>y;
        if(y<0){
            cout<<endl;
            return;
        }
        st.erase(y);
        st2.insert(y);
    }
}
int main(){
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1; it<=t; it++)
    {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1867/problem/C