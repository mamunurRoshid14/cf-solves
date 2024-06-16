//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
ll lcm(ll a,ll b){
    return (a*b)/__gcd(a,b);
}
void solve(){
    ll n,i,j; cin>>n;
    ll aa[n]; for(i=0;i<n;i++) cin>>aa[i];
    sort(aa,aa+n);
    ll gc=0;
    for(i=0;i<n-1;i++){
        gc=__gcd(abs(aa[n-1]-aa[i]),gc);
    }
    if(gc==0){
        cout<<"1\n";
        return;
    }
    ll an=0;
    for(i=0;i<n;i++){
        an+=abs((aa[n-1]-aa[i]))/gc;
    }
    ll a=1;
    for(i=n-2;i>=0;i--){
        if((aa[n-1]-a*gc)!=aa[i]){
            break;
        }
        a++;
    }
    cout<<an+a<<"\n";
 
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
                //Link: https://codeforces.com/contest/1902/problem/C