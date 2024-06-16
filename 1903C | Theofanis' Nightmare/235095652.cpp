//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve() {
    ll n,i;
    cin>>n;
    ll aa[n];
    for(i=0; i<n; i++) cin>>aa[i];
    vector<ll>v;
    ll s=0;
    ll ss=0;
    ll pre[n+2];
    pre[n-1]=aa[n-1];
    pre[n]=0;
    for(i=n-2; i>=0; i--) {
        pre[i]=pre[i+1]+aa[i];
    }
    for(i=0; i<n; i++) {
        s+=aa[i];
        if(pre[i+1]>0) {
            v.push_back(s);
            s=0;
        }
        else if(i==n-1)v.push_back(s);
    }
 
 
//    for(i=n-1;i>=0;i--){
//        s+=aa[i];
//        ss+=aa[i];
//        if(ss>=s||s>=0){
//            v.push_back(s);
//            s=0;
//        }
//        else if(i==0){
//            v.push_back(s);
//        }
//    }
    //reverse(v.begin(),v.end());
    ll mx=0;
    for(i=0; i<v.size(); i++) {
        mx+=v[i]*(i+1);
    }
    cout<<mx<<"\n";
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
                //Link: https://codeforces.com/contest/1903/problem/C