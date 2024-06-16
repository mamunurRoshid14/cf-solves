//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve() {
    ll n,i,q;
    cin>>n>>q;
    ll aa[n+2];
    for(i=1; i<=n; i++) cin>>aa[i];
    while(q--) {
        ll bb[n+2];
        for(i=1; i<=n; i++)bb[i]=aa[i];
        ll k;
        cin>>k;
        ll num=((1LL)<<60);
        //cout<<num<<"\n";
        ll ans=0;
        for(i=60; i>=0; i--) {
            ll s=0;
            vector<ll>v;
            for(ll j=1; j<=n; j++) {
//                if(s>k) {
//                    break;
//                }
                if((num&bb[j])==0) {
                    s+=(num-bb[j]);
                    v.push_back(j);
                } else {
                    bb[j]=(bb[j]^num);
                }
                if(s<0) {
                    s=LLONG_MAX;
                    break;
                }
            }
 
            if(s<=k) {
                ans+=num;
                k-=s;
                for(auto ii:v) {
                    bb[ii]=0;
                }
            }
            num/=2LL;
            if(num==0)break;
        }
        cout<<ans<<"\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    //cin>>t;
    for(ll it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1903/problem/D1