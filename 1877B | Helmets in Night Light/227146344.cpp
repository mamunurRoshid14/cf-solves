//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,p,i; cin>>n>>p;
    vector<pair<ll,ll>>v;
    ll aa[n],bb[n];
    for(i=0;i<n;i++){
        cin>>aa[i];
    }
    for(i=0;i<n;i++){
        cin>>bb[i];
        v.push_back({bb[i],-aa[i]});
    }
 
    sort(v.begin(),v.end());
    ll ans=0;
    ll in=-1;
    for(i=0;i<n;i++){
        if(v[i].F>p){
            break;
        }
        in=i;
    }
    ll cn=1;
    ll pre=0;
    ans=p;
    while(pre<=in){
        if(cn==n) break;
        if(v[pre].S==0){
            pre++;
            continue;
        }
        ans+=v[pre].F;
        v[pre].S++;
        cn++;
        //cout<<cn<<" "<<ans<<" "<<v[pre].F<<"\n";
    }
    //cout<<cn<<" "<<ans<<"\n";
    ans+=(ll)(n-cn)*p;
    cout<<ans<<"\n\n";
}
int main(){
   // ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1; it<=t; it++)
    {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
 
                //Link: https://codeforces.com/contest/1877/problem/B