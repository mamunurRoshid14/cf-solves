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
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,m,k,i,j; cin>>n>>m>>k;
    ll aa[n],bb[m];
    set<ll>st1,st2;
    for(i=0;i<n;i++)cin>>aa[i];
    for(i=0;i<m;i++)cin>>bb[i];
    for(i=0;i<n;i++)st1.insert(aa[i]);
    for(i=0;i<m;i++)st2.insert(bb[i]);
    ll a=0,b=0,c=0;
    for(i=1;i<=k;i++){
        if(st1.find(i)!=st1.end()&&st2.find(i)!=st2.end()){
            c++;
        }
        else if(st1.find(i)!=st1.end())a++;
        else if(st2.find(i)!=st2.end())b++;
    }
    if(a+b+c>=k&&a+c>=k/2&&b+c>=k/2){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return;
}
int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1;it<=t;it++){
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1927/problem/C