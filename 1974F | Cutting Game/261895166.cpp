//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define LL_INF (1LL << 62)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
void solve() {
    ll n,m,i,j,a,b; cin>>a>>b>>n>>m;
    vector<pair<ll,pair<ll,ll>>>xx,yy;
    ll cn[n+3];
    for(i=1;i<=n;i++){
        ll x,y; cin>>x>>y;
        xx.push_back({x,{y,i}});
        yy.push_back({y,{x,i}});
        cn[i]=1;
    }
    sort(xx.begin(),xx.end());
    sort(yy.begin(),yy.end());
    ll A=0,B=0;
    ll x=0,y=0,X=0,Y=0;
    ll lx=0,rx=n-1;
    ll ly=0,ry=n-1;
    for(ll jj=0;jj<m;jj++){
        char c; ll k;
        cin>>c>>k;
        ll an=0;
        if(c=='U'){
            ll l=lx,r=rx;
            ll in=-1;
            while(l<=r){
                ll m=(l+r)/2;
                if(xx[m].ff<=x+k){
                    in=m;
                    l=m+1;
                }
                else{
                    r=m-1;
                }
            }
            if(in>=0){
                for(i=lx;i<=in;i++){
                    an+=(cn[xx[i].ss.ss]);
                    cn[xx[i].ss.ss]=0;
                }
                lx=in+1;
            }
            x+=k;
        }
        else if(c=='D'){
            ll l=lx,r=rx;
            ll in=-1;
            while(l<=r){
                ll m=(l+r)/2;
                if(xx[m].ff>a-X-k){
                    in=m;
                    r=m-1;
                }
                else{
                    l=m+1;
                }
            }
            if(in>=0){
                for(i=in;i<=rx;i++){
                    an+=(cn[xx[i].ss.ss]);
                    cn[xx[i].ss.ss]=0;
                }
                rx=in-1;
            }
            X+=k;
        }
        else if(c=='L'){
            ll l=ly,r=ry;
            ll in=-1;
            while(l<=r){
                ll m=(l+r)/2;
                if(yy[m].ff<=y+k){
                    in=m;
                    l=m+1;
                }
                else{
                    r=m-1;
                }
            }
            if(in>=0){
                for(i=ly;i<=in;i++){
                    an+=(cn[yy[i].ss.ss]);
                    cn[yy[i].ss.ss]=0;
                }
                ly=in+1;
            }
            y+=k;
        }
        else if(c=='R'){
            ll l=ly,r=ry;
            ll in=-1;
            while(l<=r){
                ll m=(l+r)/2;
                if(yy[m].ff>b-Y-k){
                    in=m;
                    r=m-1;
                }
                else{
                    l=m+1;
                }
            }
            if(in>=0){
                for(i=in;i<=ry;i++){
                    an+=(cn[yy[i].ss.ss]);
                    cn[yy[i].ss.ss]=0;
                }
                ry=in-1;
            }
            Y+=k;
        }
        if(jj%2==0){
            A+=an;
        }
        else{
            B+=an;
        }
    }
    cout<<A<<" "<<B<<"\n";
    return;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1974/problem/F