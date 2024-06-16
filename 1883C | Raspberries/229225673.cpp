//https://codeforces.com/profile/mamunur_roshid_517
        //#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//#define F first
//#define S second
//#define mod 1000000007
//void solve(){
//    ll n,k,i; cin>>n>>k; string aa; cin>>aa;
//    map<char,ll>mp;
//    for(i=0;i<n;i++){
//        mp[aa[i]]++;
//    }
//    ll cn=0;
//    for(auto ii:mp){
//        if(ii.S%2)cn++;
//    }
//    if((n-k)%2){
//        cn--;
//    }
//
//    if(cn)cout<<"NO\n";
//    else cout<<"YES\n";
//}
//int main() {
//    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//    ll t=1;
//    cin>>t;
//    for(ll it=1;it<=t;it++){
//        //cout<<"Case "<<it<<": "; //cout<<'\n';
//        solve();
//    }
//    return 0;
//}
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,k,i; cin>>n>>k;
    ll aa[n];
    for(i=0;i<n;i++) cin>>aa[i];
    ll an=INT_MAX;
    for(i=0;i<n;i++){
        ll a=aa[i]%k;
        if(a==0)an=0;
        a=(k-a);
        an=min(an,a);
    }
 
    if(k==4){
        ll cn=0;
        for(i=0;i<n;i++){
            if(aa[i]%2==0) cn++;
        }
        ll c=2-cn;
        c=max(0LL,c);
        an=min(an,c);
    }
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
 
 
                //Link: https://codeforces.com/contest/1883/problem/C