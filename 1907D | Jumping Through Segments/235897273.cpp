//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
   ll n,i,j; cin>>n;
   vector<pair<ll,ll>>v;
   for(i=0;i<n;i++){
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});
   }
   ll an,l=0,r=INT_MAX;
   while(l<=r){
        ll m=(l+r)/2;
        bool f=1;
        ll mn=0,mx=0;
        for(auto ii:v){
            if(mx+m<ii.F||mn-m>ii.S)f=0;
            mx=min(mx+m,ii.S);
            mn=max(mn-m,ii.F);
        }
        if(f){
            r=m-1;
            an=m;
        }
        else{
            l=m+1;
        }
   }
   cout<<an<<"\n";
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
                //Link: https://codeforces.com/contest/1907/problem/D