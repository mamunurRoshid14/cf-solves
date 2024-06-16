//https://codeforces.com/profile/mamunur_roshid_517
        //#include<bits/stdc++.h>
//using namespace std;
//#define ll long long
//#define F first
//#define S second
//#define mod 1000000007
//void solve(){
//    ll n,i,j; cin>>n;
//    set<ll>st;
//    for(i=0;i<n;i++){
//        ll tm; cin>>tm;
//        st.insert(tm);
//    }
//    ll nn=2*n+1;
//    ll cn=2*n;
//    for(i=0;i<nn;i++){
//        while(st.find(cn)!=st.end()){
//            cn--;
//        }
//        cout<<cn<<endl;
//        st.insert(cn);
//        cn--;
//        ll y; cin>>y;
//        if(y<0){
//            cout<<endl;
//            return;
//        }
//        st.erase(y);
//    }
//}
//int main(){
//    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
//    ll t=1;
//    cin>>t;
//    for(ll it=1; it<=t; it++)
//    {
//        //cout<<"Case "<<it<<": "; //cout<<'\n';
//        solve();
//    }
//    return 0;
//}
//
 
 
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j; cin>>n;
    string aa; cin>>aa;
    ll l=0,r=n-1;
    ll cn=0;
    for(;l<r;l++,r--){
        if(aa[l]!=aa[r]){
            cn++;
        }
    }
    string bb="";
    for(i=0;i<=n;i++){
        ll a=i-cn;
        ll mx=n-cn*2;
        if(a<0){
            bb.push_back('0');
        }
        else if(a==0){
            bb.push_back('1');
        }
        else{
            if(cn==0){
                if(n%2==1){
                    bb.push_back('1');
                }
                else if(n%2==i%2){
                    bb.push_back('1');
                }
                else{
                    bb.push_back('0');
                }
                continue;
            }
            a-=mx;
            if(a<=0){
                if(((a+1000000)%2)==1&&(n%2)!=1){
                    bb.push_back('0');
                    continue;
                }
                bb.push_back('1');
            }
            else{
                bb.push_back('0');
            }
        }
    }
    cout<<bb<<"\n";
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
                //Link: https://codeforces.com/contest/1867/problem/B