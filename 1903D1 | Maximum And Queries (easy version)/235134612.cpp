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
    ll n,i,q;
    cin>>n>>q;
    ll aa[n+2];
    for(i=1; i<=n; i++) cin>>aa[i];
    while(q--) {
        ll bb[n+2];
        for(i=1; i<=n; i++)bb[i]=aa[i];
        ll k;
        cin>>k;
        ll num=(1LL<<61);
        ll ans=0;
        //cout<<num<<"\n";
        for(i=62; i>=0; i--) {
            ll s=0;
            vector<ll>v;
//            if(num==2){
//                    cout<<k<<" ";
//                for(ll j=1;j<=n;j++){
//                    cout<<bb[j]<<" ";
//                }
//            }
            for(ll j=1; j<=n; j++) {
                ll pp=s;
                if((num&bb[j])==0) {
                    s+=(num-bb[j]);
                    v.push_back(j);
                } else {
                    //cout<<bb[j]<<" ";
                    bb[j]^=num;
                    //cout<<bb[j]<<"\n";
                }
                if(s<pp) {
                    s=LLONG_MAX;
                    break;
                }
            }
//            if(num==2){
//                cout<<s<<"\n";
//            }
            if(s<=k) {
                ans+=num;
                //cout<<num<<" F"<<"\n";
                k-=s;
                for(auto ii:v) {
                    bb[ii]=0;
                }
            }
            num/=2LL;
            if(num==0)break;
            //cout<<num<<"\n";
        }
        cout<<ans<<"\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    //cin>>t;
    for(ll it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1903/problem/D1