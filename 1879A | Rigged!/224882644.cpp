//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i; cin>>n;
    ll aa[n],bb[n];
    for(i=0;i<n;i++){
        cin>>aa[i]>>bb[i];
    }
    ll mx=0;
    for(i=1;i<n;i++){
        if(aa[i]>=aa[0]){
            mx=max(mx,bb[i]);
        }
    }
    if(mx>=bb[0]){
        cout<<"-1\n";
    }
    else{
        cout<<aa[0]<<"\n";
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
 
                //Link: https://codeforces.com/contest/1879/problem/A