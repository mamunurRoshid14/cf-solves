//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,m,i,j; cin>>n>>m;
    ll ans=0;
    ll cn=50;
    while(cn--){
        ll tm=n%m;
        if(tm==0){
            n=0;
            break;
        }
        n=tm;
        ans+=n;
        n*=2LL;
    }
    if(n==0){
        cout<<ans<<"\n";
    }
    else{
        cout<<"-1\n";
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
 
                //Link: https://codeforces.com/contest/1875/problem/C