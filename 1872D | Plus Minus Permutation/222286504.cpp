//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,x,y; cin>>n>>x>>y;
    ll cn1=n/x;
    ll cn2=n/y;
    ll z=(x*y)/__gcd(x,y);
    ll cn3=n/z;
 
    cn1-=cn3;
    cn2-=cn3;
 
    ll a=(n*(n+1))/2;
    ll tm=n-cn1;
    a-=((tm*(tm+1))/2);
 
    ll b=(cn2*(cn2+1))/2;
    cout<<a-b<<"\n";
}
int main(){
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1; it<=t; it++)
    {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
 
                //Link: https://codeforces.com/contest/1872/problem/D