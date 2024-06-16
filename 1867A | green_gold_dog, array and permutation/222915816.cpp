//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j; cin>>n;
    vector<pair<ll,ll>>v;
    for(i=0;i<n;i++){
        ll tm; cin>>tm;
        v.push_back({tm,i});
    }
    sort(v.begin(),v.end());
    ll aa[n];
    ll cn=n;
    for(auto ii:v){
        aa[ii.S]=cn;
        cn--;
    }
    for(i=0;i<n;i++){
        cout<<aa[i]<<" ";
    }
    cout<<"\n";
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
 
                //Link: https://codeforces.com/contest/1867/problem/A