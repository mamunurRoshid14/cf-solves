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
    ll n,m,i,j; cin>>n;
    ll aa[n],bb[n];
    for(i=0;i<n;i++)cin>>aa[i];
    for(i=0;i<n;i++)cin>>bb[i];
    for(i=0;i<n;i++){
        if(aa[i]>bb[i]){
            cout<<"No\n";
            return;
        }
    }
    bool f=1;
    for(i=0;i<n;i++){
        ll cn=0;
        for(j=i;j>=0;j--){
            if(aa[j]<=bb[i]&&bb[j]>=bb[i]){
                if(aa[j]==bb[i]){
                    cn++; break;
                }
            }
            else{
                break;
            }
        }
        for(j=i;j<n;j++){
            if(aa[j]<=bb[i]&&bb[j]>=bb[i]){
                if(aa[j]==bb[i]){
                    cn++; break;
                }
            }
            else{
                break;
            }
        }
        if(!cn)f=0;
    }
    if(f){
        cout<<"Yes\n";
    }
    else{
        cout<<"No\n";
    }
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
                //Link: https://codeforces.com/contest/1904/problem/D1