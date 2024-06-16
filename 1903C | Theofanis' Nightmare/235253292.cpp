//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,m,i; cin>>n;
    ll aa[n+2]; for(i=1;i<=n;i++){
        cin>>aa[i];
    }
    vector<ll>v;
    ll s=0;
    for(i=n;i>0;i--){
        s+=aa[i]; if(i==1) continue;
        v.push_back(s);
    }
    ll an=0;
    sort(v.rbegin(),v.rend());
    for(i=0;i<n-1;i++){
        if(v[i]>0) an+=v[i];
    }
    cout<<an+s<<"\n";
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
                //Link: https://codeforces.com/contest/1903/problem/C