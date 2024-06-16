//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j; cin>>n;
    ll aa[n],suf[n+3];
    for(i=0;i<n;i++) cin>>aa[i];
    suf[n]=0;
    for(i=n-1;i>=0;i--){
        if(aa[i]>0)suf[i]=suf[i+1]+aa[i];
        else suf[i]=suf[i+1];
    }
    ll an=0;
    for(i=0;i<n;i++){
        if(i%2==0){
            ll tm=aa[i]+suf[i+1];
            an=max(an,tm);
        }
        else{
            ll tm=suf[i+1];
            an=max(an,tm);
        }
    }
    cout<<an<<"\n";
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
                //Link: https://codeforces.com/contest/1882/problem/C