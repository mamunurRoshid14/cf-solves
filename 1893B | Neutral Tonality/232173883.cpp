//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
vector<ll> lis(vector<ll> const& a) {
    ll n = a.size();
    const ll INF = 1000000100;
    vector<ll> d(n+1, INF);
    d[0] = -INF;
 
    vector<ll>dd[n+1];
    dd[0].push_back(-INF);
    for(ll i=1; i<=n; i++) dd[i].push_back(INF);
 
    for (ll i = 0; i < n; i++) {
        ll l = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
        if (d[l-1] < a[i] && a[i] < d[l]) {
            d[l] = a[i];
            dd[l].push_back(a[i]);
        }
    }
 
    ll ans = 0; // lis lenth
    for (ll l = 0; l <= n; l++) {
        if (d[l] < INF)
            ans = l;
    }
    vector<ll>v;
    ll mx=INF;
    for(ll i=ans; i>0; i--) {
        ll L=0,R=dd[i].size()-1;
        ll l=0;
        while(L<=R){
            ll mid=(L+R)/2;
            if(mx>dd[i][mid]){
                l=mid;
                R=mid-1;
            }
            else{
                L=mid+1;
            }
        }
        v.push_back(dd[i][l]); mx=dd[i][l];
    }
    reverse(v.begin(),v.end());
    return v;
}
void solve() {
    ll n,m,i,j;
    cin>>n>>m;
    vector<ll>aa(n),bb(m);
    for(i=0; i<n; i++) cin>>aa[i];
    for(i=0;i<m;i++) cin>>bb[i];
    vector<ll>v=lis(aa);
 
//    cout<<"F "<<v.size()<<"\n";
    sort(bb.rbegin(),bb.rend());
    ll vi=0,bi=0;
    vector<ll>an; bool f=1;
    for(i=0;i<n;i++){
        if(aa[i]==v[0]&&f){
            f=0;
            while(bi<m&&bb[bi]>=aa[i]){
                an.push_back(bb[bi]); bi++;
            }
            an.push_back(aa[i]); vi++;
        }
        else if(aa[i]==v[vi]){
            while(bi<m&&bb[bi]>=aa[i]){
                an.push_back(bb[bi]); bi++;
            }
            an.push_back(aa[i]);
            vi++;
        }
        else{
            while(bi<m&&bb[bi]>=aa[i]){
                an.push_back(bb[bi]); bi++;
            }
            an.push_back(aa[i]);
        }
    }
    while(bi<m){
        an.push_back(bb[bi]); bi++;
    }
 
//    v=lis(an);
//
//    cout<<"F "<<v.size()<<"\n";
    for(auto ii:an){
        cout<<ii<<" ";
    }
    cout<<"\n\n";
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
                //Link: https://codeforces.com/contest/1893/problem/B