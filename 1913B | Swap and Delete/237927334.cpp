//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define CC(x) cout << "Case " << ++x << ":";
#define nn "\n"
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 1000006
 
void solve(){
    string aa; cin>>aa;
    ll n=aa.size(),i,j;
    ll cn0=0,cn1=0;
    for(i=0;i<n;i++){
        if(aa[i]=='0')cn0++;
        else cn1++;
    }
    ll an=0;
    for(i=0;i<n;i++){
        if(aa[i]=='0'){
            if(cn1==0){
                an+=(n-i);
                break;
            }
            cn1--;
        }
        else{
            if(cn0==0){
                an+=(n-i);
                break;
            }
            cn0--;
        }
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
                //Link: https://codeforces.com/contest/1913/problem/B