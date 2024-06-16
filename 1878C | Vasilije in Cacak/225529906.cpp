//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,k,x,i; cin>>n>>k>>x;
    ll mn=(k*(k+1))/2;
    ll mx=(n*(n+1))/2-((n-k)*(n-k+1))/2;
    //cout<<mn<<" "<<mx<<" ";
    if(x>=mn&&x<=mx){
        cout<<"YES\n";
    }
    else {
        cout<<"NO\n";
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
 
                //Link: https://codeforces.com/contest/1878/problem/C