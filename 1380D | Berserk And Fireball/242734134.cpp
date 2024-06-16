//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll long long
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
 
ll add(ll b, ll c) {
    if(LL_INF-b<c) return LL_INF+1;
    return b+c;
}
ll mul(ll b, ll c) {
    if(LL_INF/b<c) return LL_INF+1;
    return b*c;
}
void solve() {
    //First, confirm your idea with pen and paper.
    ll n,m,i,j;
    cin>>n>>m;
    ll x,k,y;
    cin>>x>>k>>y;
    ll aa[n+1],bb[m];
    aa[n]=-LL_INF;
    map<ll,ll>mp;
    for(i=0; i<n; i++) {
        cin>>aa[i];
        mp[aa[i]]=i;
    }
    ll cc[m+2];
    bool F=1;
    for(i=0; i<m; i++) {
        cin>>bb[i];
        if(mp.find(bb[i])==mp.end()) {
            F=0;
        }
        cc[i+1]=mp[bb[i]];
    }
    if(F==0) {
        cout<<"-1\n";
        return;
    }
    cc[m+1]=n;
    cc[0]=-1;
    for(i=0; i<m+1; i++) {
        if(cc[i]>=cc[i+1]) {
            cout<<"-1\n";
            return;
        }
    }
    ll an=0;
    if(k==1) {
        for(i=0; i<m+1; i++) {
            ll l=cc[i]+1;
            ll r=cc[i+1]-1;
            ll f=0;
            for(j=l; j<=r; j++) {
                if((l>0&&aa[j]<aa[l-1])||aa[j]<aa[r+1]||aa[j]<aa[j+1]||(j>0&&aa[j]<aa[j-1])) {
 
                } else {
                    f=1;
                }
            }
            ll len=r-l+1;
            an+=f*x;
            len-=f;
            an+=(len)*min(x,y);
        }
        cout<<an<<"\n";
        return;
    } else {
        for(i=0; i<m+1; i++) {
            ll l=cc[i]+1;
            ll r=cc[i+1]-1;
            ll f=0;
            for(j=l; j<=r; j++) {
                if((l>0&&aa[j]<aa[l-1])||aa[j]<aa[r+1]||aa[j]<aa[j+1]||(j>0&&aa[j]<aa[j-1])) {
 
                } else {
                    f=1;
                }
            }
            ll tm3=f/k;
            if(f%k)tm3++;
 
            ll len=r-l+1;
            if(len<tm3*k) {
                cout<<"-1\n";
                return;
            } else {
                len-=tm3*k;
                ll tm1=(len/k)*x+(len%k)*y;
                ll tm2=len*y;
                an+=min(tm1,tm2)+tm3*x;
            }
        }
        cout<<an<<"\n";
    }
 
    return;
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    //cin >> t;
    for(int it=1; it<=t; it++) {
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1380/problem/D