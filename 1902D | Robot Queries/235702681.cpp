//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve() {
    ll n,m,i,j;
    cin>>n>>m;
    map<pair<ll,ll>,set<ll>>suf,pre;
    string aa;
    cin>>aa;
    ll x=0,y=0;
    vector<pair<ll,ll>>v1,v2;
    v1.push_back({0,0});
    for(i=0; i<n; i++) {
        if(aa[i]=='L')x--;
        else if(aa[i]=='R') x++;
        else if(aa[i]=='U')y++;
        else y--;
        pre[ {x,y}].insert(i+1);
        v1.push_back({x,y});
    }
    v1.push_back({x,y});
 
    x=0,y=0;
    v2.push_back({0,0});
    for(i=n-1; i>=0; i--) {
        if(aa[i]=='L')x--;
        else if(aa[i]=='R') x++;
        else if(aa[i]=='U')y++;
        else y--;
        suf[ {x,y}].insert(i+1);
        v2.push_back({x,y});
    }
    v2.push_back({x,y});
    reverse(v2.begin(),v2.end());
    while(m--) {
        ll xx,yy,l,r;
        cin>>xx>>yy>>l>>r;
        pre[ {xx,yy}].insert(INT_MAX);
        ll a=*pre[ {xx,yy}].lower_bound(1);
        //cout<<"F1 "<<a<<" ";
        bool f=0;
        if(xx==yy&&xx==0) f=1;
        if(a<l) f=1;
        a=*pre[{xx,yy}].lower_bound(r+1);
        //cout<<"F2 "<<a<<" ";
        if(a<=n)f=1;
//        cout<<v1[l-1].F<<"   "<<v1[l-1].S<<"\n";
//        cout<<v2[r+1].F<<"   "<<v2[r+1].S<<"\n";
        xx-=v1[l-1].F;
        yy-=v1[l-1].S;
        xx+=v2[r+1].F;
        yy+=v2[r+1].S;
        suf[ {xx,yy}].insert(INT_MAX);
        a=*suf[ {xx,yy}].lower_bound(l);
        if(a<=r) f=1;
        //cout<<"F3 "<<a<<"\n";
        if(f) cout<<"YES\n";
        else cout<<"NO\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    //cin>>t;
    for(ll it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1902/problem/D