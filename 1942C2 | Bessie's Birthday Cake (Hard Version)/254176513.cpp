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
    //First, confirm your idea with pen and paper.
    ll n,x,y,i,j;
    cin>>n>>x>>y;
    ll aa[x+2];
    ll yyy=y;
    for(i=0; i<x; i++)cin>>aa[i];
    sort(aa,aa+x);
    aa[x]=aa[0];
    ll an=0;
    vector<ll>vv;
    for(i=0; i<x; i++) {
        if((aa[i]+2)%n==(aa[i+1])%n) {
            an++;
        }
        if(i==x-1){
 
            vv.push_back(n-aa[i]+aa[i+1]);
            continue;
        }
        vv.push_back(abs(aa[i]-aa[i+1]));
    }
    sort(vv.begin(),vv.end());
    ll yy=0;
    for(auto ii:vv) {
        if(ii==4&&y) {
            y--;
            yy++;
            an+=2;
        }
    }
    for(auto ii:vv) {
        if(ii%2==0&&ii>4&&y) {
            ll cc=ii/2;
            if(cc-1<=y) {
                an+=cc;
                y-=cc-1;
                yy+=cc-1;
            } else {
                an+=y;
                yy+=y;
                y=0;
                break;
            }
        }
    }
    for(auto ii:vv) {
        if(ii%2&&ii>2&&y) {
            ll cc=(ii+1)/2;
            if(cc-1<=y) {
                an+=cc-1;
                y-=cc-1;
                yy+=cc-1;
            } else {
                an+=y;
                yy+=y;
                y=0;
                break;
            }
        }
    }
 
    //cout<<"F "<<an<<"\n";
 
    ll ans=-1;
    ll xx=x+yy;
    if(xx%2)an++;
    xx/=2;
    an+=(xx-1)*2;
    ans=max(ans,an);
 
    xx=x+yyy;
    an=0;
    if(xx%2)an++;
    xx/=2;
    an+=(xx-1)*2;
    ans=max(ans,an);
 
    cout<<ans<<"\n";
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
                //Link: https://codeforces.com/contest/1942/problem/C2