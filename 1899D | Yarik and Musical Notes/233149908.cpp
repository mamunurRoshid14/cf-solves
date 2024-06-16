//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j; cin>>n;
    map<ll,ll>mp;
    ll aa[n];
    for(i=0;i<n;i++){
        cin>>aa[i]; mp[aa[i]]++;
    }
    ll an=0;
    for(auto ii:mp){
        an+=(ii.S*(ii.S-1))/2;
    }
    an+=(mp[1]*mp[2]);
    cout<<an<<"\n";
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
                //Link: https://codeforces.com/contest/1899/problem/D