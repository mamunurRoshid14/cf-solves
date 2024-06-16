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
    ll n,m,i,j; cin>>n>>m;
    ll aa[n],bb[n];
    for(i=0;i<n;i++){
        cin>>aa[i]; bb[i]=aa[i];
    }
    sort(bb,bb+n);
    ll cn=0;
    for(i=0;i<n;i++){
        if(m-bb[i]>=0)cn++;
        else break;
        m-=bb[i];
    }
    if(cn==0){
        cout<<n+1<<"\n";
    }
    else if(cn==n){
        cout<<"1\n";
    }
    else if(m+bb[cn-1]>=aa[cn]){
        cout<<n-cn<<"\n";
    }
    else{
        cout<<n-cn+1<<"\n";
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
                //Link: https://codeforces.com/contest/1783/problem/C