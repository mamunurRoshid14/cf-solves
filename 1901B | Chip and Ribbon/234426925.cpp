//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve() {
    ll n,i;
    cin>>n;
    ll aa[n];
    for(i=0; i<n; i++) {
        cin>>aa[i];
    }
    ll an=0;
    for(i=1;i<n;i++){
        an+=max(0LL,aa[i]-aa[i-1]);
    }
    an+=aa[0]-1;
    cout<<an<<"\n";
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
                //Link: https://codeforces.com/contest/1901/problem/B