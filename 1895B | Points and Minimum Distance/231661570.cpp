//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j,an=0; cin>>n;
    n+=n;
    ll aa[n]; for(i=0;i<n;i++) cin>>aa[i];
    sort(aa,aa+n);
    for(i=0,j=n/2;i<n/2-1;i++,j++){
        an+=aa[i+1]-aa[i];
        an+=aa[j+1]-aa[j];
    }
    cout<<an<<"\n";
    for(i=0,j=n-1;i<j;i++,j--){
        cout<<aa[i]<<" "<<aa[j]<<"\n";
    }
    cout<<"\n";
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
                //Link: https://codeforces.com/contest/1895/problem/B