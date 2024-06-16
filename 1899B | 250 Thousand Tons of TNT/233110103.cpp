//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j; cin>>n;
    ll aa[n];
    for(i=0;i<n;i++) cin>>aa[i];
    ll an=0;
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            ll ii=i;
            ll jj=n/i;
            ll s=0;
            ll mx=0,mn=LLONG_MAX;
            for(j=0;j<n;j++){
                s+=aa[j];
                if(j%ii==ii-1){
                    mn=min(mn,s);
                    mx=max(mx,s);
                    s=0;
                }
            }
            an=max(mx-mn,an);
            mx=0,mn=LLONG_MAX;
            for(j=0;j<n;j++){
                s+=aa[j];
                if(j%jj==jj-1){
                    mn=min(mn,s);
                    mx=max(mx,s);
                    s=0;
                }
            }
            an=max(mx-mn,an);
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
 
                //Link: https://codeforces.com/contest/1899/problem/B