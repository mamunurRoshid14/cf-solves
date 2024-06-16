//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j; cin>>n;
    ll aa[n]; for(i=0;i<n;i++){
        cin>>aa[i];
    }
    ll cnt=0;
    for(i=1;i<n;i++){
        cnt+=(aa[i]<=aa[i-1]);
    }
    ll ans=INT_MAX,cnt2=0;
    for(i=0;i<n;i++){
        ans=min(ans,cnt+cnt2+(i>0));
        if(i+1<n) cnt-=(aa[i]>=aa[i+1]);
        if(i>0) cnt+=(aa[i]>=aa[i-1]);
    }
    cout<<ans<<"\n";
}
int main() {
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1;it<=t;it++){
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1861/problem/D