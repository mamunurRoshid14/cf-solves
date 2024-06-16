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
    ll n,k,i; cin>>n>>k;
    ll aa[n];
    for(i=0;i<n;i++){
        cin>>aa[i];
    }
    k--;
    swap(aa[0],aa[k]);
    ll an1=0;
    ll in=-1;
    for(i=1;i<n;i++){
        if(aa[i]<aa[0]){
            an1++;
        }
        else{
            in=i;
            break;
        }
    }
    ll an2=0;
    if(in>=0){
        swap(aa[0],aa[k]);
        swap(aa[k],aa[in]);
 
        for(i=1;i<n;i++){
            if(i<in){
                aa[i]=max(aa[i],aa[i-1]);
            }
            else{
                if(i-1==in)continue;
                if(aa[in]>aa[i-1]){
                    an2++;
                }
                else{
                    break;
                }
            }
        }
    }
    cout<<max(an1,an2)<<"\n";
 
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
                //Link: https://codeforces.com/contest/1951/problem/B