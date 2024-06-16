//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,k,i; cin>>n>>k; string aa; cin>>aa;
    map<char,ll>mp; ll kk=k;
    for(i=0;i<n;i++){
        mp[aa[i]]++;
    }
    ll cn=0;
    for(auto ii:mp){
        if(ii.S%2)cn++;
    }
    for(auto ii:mp){
        if(ii.S%2&&k){
            cn--;
            k--;
        }
    }
    if((n-kk)%2){
        cn--;k--;
    }
    //cout<<cn<<" "<<k<<"\n";
    if(cn>0||k%2==1)cout<<"NO\n";
    else cout<<"YES\n";
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
                //Link: https://codeforces.com/contest/1883/problem/B