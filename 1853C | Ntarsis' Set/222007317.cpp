//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,k,i,j; cin>>n>>k;
    ll aa[n+3];
    map<ll,ll,greater<ll>>mp;
    for(i=1;i<=n;i++){
        cin>>aa[i]; mp[aa[i]]=i;
    }
    if(aa[1]!=1){
        cout<<"1\n";
        return;
    }
    ll l=0,r=500000000000;
    ll ans=-1;
    while(l<=r){
        ll m=(l+r)/2;
        ll s=0;
        for(i=0;i<k;i++){
            s+=(mp.lower_bound(m-s)->S);
        }
        if(s>=m){
            l=m+1;
            ans=l;
        }
        else{
            r=m-1;
        }
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
                //Link: https://codeforces.com/contest/1853/problem/C