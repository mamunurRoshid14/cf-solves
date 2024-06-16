//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 998244353
ll f[300000];
void solve(){
    string aa; cin>>aa; aa="F"+aa+"G";
    ll n=aa.size(),i,j;
    vector<ll>v;
    ll cn=1;
    ll an1=0;
    for(i=1;i<n;i++){
        if(aa[i]==aa[i-1]){
            cn++;
        }
        else{
            v.push_back(cn);
            an1+=(cn-1);
            cn=1;
        }
    }
    ll an2=1;
    for(auto ii:v){
        an2*=ii;
        an2%=mod;
    }
    an2*=f[an1];
    an2%=mod;
    cout<<an1<<" "<<an2<<"\n";
}
int main(){
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    f[0]=1;
    for(ll i=1;i<=200005;i++){
        f[i]=i*f[i-1];
        f[i]%=mod;
    }
    cin>>t;
    for(ll it=1; it<=t; it++)
    {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1879/problem/C