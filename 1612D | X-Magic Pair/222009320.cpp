//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll a,b,x; cin>>a>>b>>x;
    bool f=false;
    if(b==x||a==x) f=true;
    while(max(a,b)>=x&&!f&&a!=b){
        if(a<b) swap(a,b);
        if(b>a-b) b=a-b;
        ll cn=max(1LL,(a-max(x,b))/(2*b));
        a=a-b*cn;
        if(b==x||a==x) f=true;
    }
    if(f) cout<<"YES\n";
    else cout<<"NO\n";
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
                //Link: https://codeforces.com/contest/1612/problem/D