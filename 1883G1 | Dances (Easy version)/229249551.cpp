//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,m,i,j; cin>>n>>m;
    ll aa[n],bb[n]; aa[0]=1;
    for(i=1;i<n;i++)cin>>aa[i];
    for(i=0;i<n;i++)cin>>bb[i];
    sort(aa,aa+n);
    sort(bb,bb+n);
    ll p1=0,p2=0;
    while(p2<n){
        if(aa[p1]<bb[p2]){
            p1++;
        }
        p2++;
    }
    //cout<<p1<<"\n";
    cout<<n-p1<<"\n";
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
 
                //Link: https://codeforces.com/contest/1883/problem/G1