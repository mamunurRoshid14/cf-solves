//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define  ll  long long
const int N=1e5+5;
ll a[N],d[N];
void Solution() {
    ll t,i,j,n,m,l,r,ans=0;
    cin>>n;
    for(i=0; i<n; i++) cin>>a[i],d[i]=0;
    for(i=1; i<n; i++) {
        r=d[i-1];
        if(a[i]<a[i-1]) {
            l=a[i-1]/a[i];
            if(a[i-1]%a[i]!=0ll) l++;
            j=1;
            while(j<l) {
                j*=2ll;
                r++;
            }
            ans+=r;
            d[i]=r;
        } else {
            l=a[i]/a[i-1];
            j=1;
            while(j<=l) {
                j*=2ll;
                r--;
            }
            r++;
            if(r<0) r=0;
            ans+=r;
            d[i]=r;
        }
    }
    cout<<ans<<"\n";
}
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);
    ll t=1;
    cin>>t;
    while(t--) Solution();
    return 0;
}
                //Link: https://codeforces.com/contest/1883/problem/E