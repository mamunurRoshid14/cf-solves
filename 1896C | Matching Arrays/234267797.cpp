//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve() {
    ll n,i,j,x;
    cin>>n>>x;
    ll aa[n],bb[n];
    multimap<ll,ll>st;
    for(i=0; i<n; i++) {
        cin>>aa[i];
        st.insert({aa[i],i});
    }
    for(i=0; i<n; i++) {
        cin>>bb[i];
    }
    ll an[n];
    memset(an,0,sizeof an);
    sort(bb,bb+n);
    ll tm=n-x;
    ll in=x;
    while(tm) {
        auto ii=*st.begin();
        an[ii.S]=bb[in];
        in++;
        tm--;
        st.erase(st.begin());
    }
    for(i=0; i<x; i++) {
        auto ii=*st.begin();
        an[ii.S]=bb[i];
        st.erase(st.begin());
    }
    ll xx=0;
    for(i=0; i<n; i++) {
        if(an[i]<aa[i])xx++;
    }
    if(xx==x) {
        cout<<"YES\n";
        for(i=0; i<n; i++) cout<<an[i]<<" ";
        cout<<"\n";
    } else {
        cout<<"NO\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1896/problem/C