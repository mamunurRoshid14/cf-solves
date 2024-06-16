//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j; cin>>n;
    ll aa[n];
    multiset<ll>st1,st2,st3;
    for(i=0;i<n;i++){
        ll tm; cin>>tm;
        st1.insert(tm);
    }
    for(i=0;i<n;i++){
        ll tm; cin>>tm;
        st2.insert(tm);
    }
    ll an1=n*(*st1.begin());
    for(auto ii:st2) an1+=ii;
    ll an2=n*(*st2.begin());
    for(auto ii:st1) an2+=ii;
    cout<<min(an1,an2)<<"\n";
 
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1; it<=t; it++)
    {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
 
                //Link: https://codeforces.com/contest/1879/problem/B