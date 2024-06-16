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
    string aa; cin>>aa;
    ll i,j;
    aa=" "+aa+" ";
    ll n=aa.size();
 
    ll an=INT_MAX;
    ll s[n+3],p[n+3];
    p[0]=0;
    for(i=1;i<n;i++){
        p[i]=p[i-1]+(aa[i]!=aa[i-1]);
        //cout<<s[i]<<" ";
    }
    //cout<<"\n";
    s[n-1]=0;
    for(i=n-2;i>0;i--){
        s[i]=s[i+1]+(aa[i]!=aa[i+1]);
    }
 
    for(i=1;i<n-1;i++){
        ll in=i;
        while(aa[in]<=aa[in+1]){
            in++;
        }
        ll c=p[i-1]+s[in+1]+1;
        i=in;
        an=min(an,c);
    }
    cout<<an<<"\n";
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
                //Link: https://codeforces.com/contest/1971/problem/D