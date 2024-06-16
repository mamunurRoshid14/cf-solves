//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll unsigned long long
#define int unsigned long long
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
int add(int b, int c){
    if(LL_INF-b<c) return LL_INF+1;
    return b+c;
}
int mul(int b, int c){
    if(LL_INF/b<c) return LL_INF+1;
    return b*c;
}
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,q,i,j; cin>>n>>q;
    ll aa[n+2]; memset(aa,0,sizeof aa);
    ll bb[n+2]; memset(bb,0,sizeof bb);
    ll cc[n+2]; memset(cc,0,sizeof cc);
 
    for(i=1;i<=n;i++){
        ll c,x; cin>>c>>x;
        if(c==1){
            cc[i]=c;
            bb[i]=x;
            aa[i]=add(aa[i-1],1);
        }
        else{
            cc[i]=c;
            bb[i]=x+1;
            aa[i]=mul(aa[i-1],(x+1LL));
        }
    }
    //for(i=1;i<=n;i++)cout<<aa[i]<<" ";cout<<"\n";
    while(q--){
        ll k; cin>>k;
        ll in=n;
        while(1){
            ll l=1,r=in;
            while(l<=r){
                ll m=(l+r)/2;
                if(k==aa[m]){
                    in=m;
                    break;
                }
                else if(aa[m]<k){
                    l=m+1;
                }
                else{
                    r=m-1;
                    in=m;
                }
            }
            if(cc[in]==1){
                cout<<bb[in]<<" ";
                break;
            }
            k=k%aa[in-1];
            if(k==0)k=aa[in-1];
           // cout<<in<<" "<<k<<"\n";
        }
    }
    cout<<"\n";
    return;
}
 
int32_t main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1;it<=t;it++){
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1920/problem/D