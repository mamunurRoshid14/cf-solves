//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j; cin>>n;
    ll aa[n+2];
    for(i=1;i<=n;i++){
        cin>>aa[i];
    }
    if(aa[1]==1){
        cout<<"YES\n";
    }
//    else if(aa[1]==1&&aa[n]==n){
//        bool f=1;
//        for(i=1;i<=n;i++){
//            if(aa[i]!=i) f=0;
//        }
//        if(f){
//            cout<<"YES\n";
//        }
//        else{
//            cout<<"NO\n";
//        }
//    }
    else{
        cout<<"NO\n";
    }
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
                //Link: https://codeforces.com/contest/1896/problem/A