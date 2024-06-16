//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll  long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define CC(x) cout << "Case " << ++x << ":";
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 200006
 
ll aa[55];
ll n;
ll f(ll x) {
    if(x<0)return 0;
    ll cn=0;
    for(ll i=0; i<n; i++) {
        ll num=aa[i]+x;
        ll l=0,r=sqrt(2LL*num);
        while(l<=r) {
            ll m=(l+r)/2;
            if(m*m==num) {
                cn++;
                break;
            } else if(m*m<num) {
                l=m+1;
            } else {
                r=m-1;
            }
        }
    }
    //cout<<x<<"  "<<cn<<"\n";
    return cn;
}
void solve() {
    //First, confirm your idea with pen and paper.
    ll i,j;
    cin>>n;
    for(i=0; i<n; i++) {
        cin>>aa[i];
    }
    ll an=1;
    for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            ll dif=aa[j]-aa[i];
            for(ll k=1; k*k<=dif; k++) {
                if(dif%k==0){
                    ll x=k; ll y=dif/k;
                    ll xx1=x+y;
                    ll xx2=-x+y;
                    if(xx1%2==0&&xx2%2==0){
                        xx1/=2;
                        xx2/=2;
                        if(xx1>xx2)swap(xx1,xx2);
                        an=max(an,f(xx1*xx1-aa[i]));
                        an=max(an,f(xx2*xx2-aa[j]));
                    }
                }
            }
        }
    }
    cout<<an<<"\n";
    return;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1; it<=t; it++) {
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1781/problem/D