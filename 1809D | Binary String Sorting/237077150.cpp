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
#define N 1000000000000LL
 
void solve(){
    string aa; cin>>aa; aa=" "+aa;
    ll n=aa.size(),i,j;
    ll pre[n+3],suf[n+3]; pre[0]=0; suf[n]=0;
    for(i=1;i<n;i++){
        pre[i]=pre[i-1]+(aa[i]=='1');
    }
    for(i=n-1;i>0;i--){
        suf[i]=suf[i+1]+(aa[i]=='0');
    }
    ll an=LL_INF;
    for(i=1;i<n;i++){
        if(i!=1&&aa[i]=='0'&&aa[i-1]=='1'){
            ll tm=pre[i-2]*(N+1LL)+suf[i+1]*(N+1LL)+N;
            an=min(an,tm);
        }
        else{
            ll tm=pre[i-1]*(N+1LL)+suf[i+1]*(N+1LL);
            an=min(an,tm);
 
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
                //Link: https://codeforces.com/contest/1809/problem/D