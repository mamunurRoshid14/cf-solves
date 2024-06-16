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
 
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,k,d,i,j; cin>>n>>k>>d;
    ll aa[n],bb[k];
    for(i=0;i<n;i++)cin>>aa[i];
    for(i=0;i<k;i++)cin>>bb[i];
    ll an=0;
    ll mn=min(d,3*n);
    for(i=0;i<mn;i++){
        ll cn=0;
        for(j=0;j<n;j++){
            if(aa[j]==j+1)cn++;
        }
        ll tm=cn+((d-i-1)/2);
        an=max(an,tm);
        for(j=0;j<bb[i%k];j++)aa[j]++;
    }
    cout<<an<<"\n";
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1;it<=t;it++){
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1917/problem/C