//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll w,f,n,i,j,s=0; cin>>w>>f>>n;
    ll aa[n]; for(i=0;i<n;i++) {
        cin>>aa[i]; s+=aa[i];
    }
    vector<ll>dp1(s+2,0),dp2(s+2,0);
    for(i=0;i<n;i++){
        for(j=s;j-aa[i]>=0;j--){
            dp2[j]=max(dp1[j],dp1[j-aa[i]]+aa[i]);
        }
        dp1=dp2;
    }
    ll an=INT_MAX;
    for(i=0;i<=s;i++){
        ll t=(i+w-1)/w;
        if(s-dp1[i]<=f*t){
            an=min(an,t);
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
                //Link: https://codeforces.com/contest/1862/problem/F