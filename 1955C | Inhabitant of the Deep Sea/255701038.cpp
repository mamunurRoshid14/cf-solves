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
    ll n,k,i,j;
    cin>>n>>k;
    ll aa[n];
    for(i=0; i<n; i++) {
        cin>>aa[i];
    }
    ll l=0,r=n-1;
    ll an=0;
    while(l<=r) {
        ll mn=min(aa[l],aa[r]);
 
        if(l==r) {
            if(mn<=k) {
                an++;
            }
            break;
        }
        if(k>=mn+mn) {
            k-=mn;
            k-=mn;
            aa[l]-=mn;
            aa[r]-=mn;
            if(aa[l]==0) {
                an++;
                l++;
            }
            if(aa[r]==0) {
                an++;
                r--;
            }
            //cout<<l<<" "<<r<<"\n";
        } else if(k>=mn+mn-1) {
            if(aa[l]==mn) {
                an++;
            }
            break;
        } else {
            break;
        }
    }
    cout<<an<<"\n";
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
                //Link: https://codeforces.com/contest/1955/problem/C