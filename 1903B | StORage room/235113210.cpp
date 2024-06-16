//https://codeforces.com/profile/mamunur_roshid_517
        //#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//#define F first
//#define S second
//#define mod 1000000007
//void solve() {
//    ll n,i,j,q;
//    cin>>n>>q;
//    ll aa[n];
//    for(i=0; i<n; i++) {
//        cin>>aa[i];
//    }
//    ll need[60];
//    memset(need,0,sizeof need);
//    ll num=1;
//    ll ss[60];
//    for(i=0; i<60; i++) {
//        for(j=0; j<n; j++) {
//            if((aa[j]&&num)) {
//                ss[i]+=num;
//            }
//        }
//        num*=2LL;
//    }
//    for(i=1;i<60;i++){
//        ss[i]+=ss[i-1];
//    }
//    num=1;
//    for(i=0; i<60; i++) {
//        ll s=0;
//        for(j=0; j<n; j++) {
//            if((num&aa[j])==0) {
//                s+=num;
//            }
//        }
//        need[i]=s;
//        num*=2LL;
//    }
//    while(q--) {
//        ll k; cin>>k;
//
//    }
//
//}
//int main() {
//    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//    ll t=1;
//    cin>>t;
//    for(ll it=1; it<=t; it++) {
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
void solve() {
    ll n,i,j;
    cin>>n;
    ll aa[n+2][n+2];
    ll ans[n+2];
    for(i=1; i<=n; i++) {
        for(j=1; j<=n; j++) cin>>aa[i][j];
    }
    for(i=1; i<=n; i++) {
        ans[i]=(1<<30)-1;
        ll num=1;
        for(ll ii=0; ii<30; ii++) {
            ll cn=0;
            for(j=1; j<=n; j++) {
                if(i==j) continue;
 
                if((aa[i][j]&num)==0) {
                    cn++;
                }
                else{
                    //cout<<"F "<<j<<"\n";
                }
            }
            if(cn) {
                ans[i]-=num;
            }
            num*=2;
        }
    }
    bool f=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            if(i==j) continue;
            if((ans[i]|ans[j])!=aa[i][j]) f=0;
        }
    }
    if(f==0){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    for(i=1; i<=n; i++) cout<<ans[i]<<" ";
    cout<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1903/problem/B