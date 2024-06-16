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
    ll n,i,j; cin>>n;
    ll aa[n];
    for(i=0;i<n;i++){
        cin>>aa[i];
    }
    ll l=1,r=n-2;
    while(l<n&&aa[l]==aa[l-1])l++;
    while(r>=0&&aa[r]==aa[r+1])r--;
    if(aa[0]==aa[n-1]){
        ll s=r-l+1;
        s=max(s,0LL);
        cout<<s<<"\n";
    }
    else{
        ll s=n-l;
        s=min(s,r+1);
        cout<<s<<"\n";
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
                //Link: https://codeforces.com/contest/1931/problem/C