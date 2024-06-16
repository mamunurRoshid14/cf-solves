//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j; cin>>n;
    ll aa[500];
    for(i=1;i<=n;i++){
        cin>>aa[i];
    }
    for(i=n+1;i<500;i++){
        aa[i]=10002;
    }
    ll m=1;
    bool f=1;
    while(m<200){
        ll mm=m*2;
        for(i=m+1;i<mm;i++){
            if(aa[i]>aa[i+1]){
                f=0;
            }
        }
        m*=2;
    }
    if(f){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
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
 
                //Link: https://codeforces.com/contest/1891/problem/A