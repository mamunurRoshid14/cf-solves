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
    vector<ll>v;
    sort(aa,aa+n);
    while(aa[0]!=aa[n-1]){
        if(aa[0]%2==0){
            v.push_back(0);
            aa[0]/=2; aa[n-1]/=2;
        }
        else{
            v.push_back(1);
            aa[0]=(aa[0]+1)/2; aa[n-1]=(aa[n-1]+1)/2;
        }
    }
    if(v.size()>n){
        cout<<v.size()<<"\n";
    }
    else{
        cout<<v.size()<<"\n";
        for(auto ii:v) cout<<ii<<" "; cout<<"\n";
    }
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
                //Link: https://codeforces.com/contest/1901/problem/C