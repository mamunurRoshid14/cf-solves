//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve() {
    ll n,k,i,j;
    cin>>n>>k;
    ll aa[k],bb[k];
    string st;
    cin>>st;
    st=" "+st;
    for(i=0; i<k; i++) cin>>aa[i];
    for(i=0; i<k; i++) cin>>bb[i];
    map<ll,ll>mp;
    for(i=0; i<k; i++) {
        mp[bb[i]]=i;
    }
    vector<pair<ll,ll>>v[k];
    ll q;
    cin>>q;
    while(q--) {
        ll x;
        cin>>x;
        ll in=mp.lower_bound(x)->S;
        ll l=min(x,aa[in]+bb[in]-x);
        ll r=max(x,aa[in]+bb[in]-x);
        v[in].push_back({l,r});
    }
    for(i=0; i<k; i++) {
        if(v[i].size()==0) continue;
        sort(v[i].begin(),v[i].end());
        bool f=true;
        for(ll ii=0; ii<v[i].size()-1; ii++) {
            if(f) {
                f=false;
                ll l=v[i][ii].F,r=v[i][ii].S;
                while(l<v[i][ii+1].F&&l<r) {
                    swap(st[l],st[r]);
                    l++;
                    r--;
                }
            } else f=true;
        }
        if(f) {
            ll l=v[i].back().F,r=v[i].back().S;
            while(l<r) {
                swap(st[l],st[r]);
                l++;
                r--;
            }
        }
    }
    for(i=1;i<=n;i++) cout<<st[i];
    cout<<"\n";
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
 
                //Link: https://codeforces.com/contest/1878/problem/D