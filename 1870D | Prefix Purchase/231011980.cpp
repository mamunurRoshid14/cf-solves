//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve() {
    ll n,i,j;
    cin>>n; ll aa[n+3];
    for(i=1;i<=n;i++) cin>>aa[i];
    for(i=n-1;i>0;i--){
        aa[i]=min(aa[i],aa[i+1]);
    }ll k,cur=INT_MAX; cin>>k;
    aa[0]=0;
    for(i=1;i<=n;i++){
        ll v=aa[i]-aa[i-1];
        if(v){
            cur=min(cur,k/v); k-=v*cur;
        }
        cout<<cur<<" ";
    }
    cout<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1870/problem/D