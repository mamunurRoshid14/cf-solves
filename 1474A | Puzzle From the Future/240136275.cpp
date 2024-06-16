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
    ll n,i,j; cin>>n; string aa; cin>>aa;
    ll pre=0;
    for(i=0;i<n;i++){
        if(pre==0){
            cout<<"1";
            pre+=1;
            pre+=(aa[i]=='1');
        }
        else if(pre==1){
            if(aa[i]=='1'){
                cout<<"1";
                pre++;
            }
            else{
                cout<<"0";
                pre=0;
            }
        }
        else{
            if(aa[i]=='1'){
                cout<<"0";
                pre=1;
            }
            else{
                cout<<"1";
                pre=1;
            }
        }
    }
    cout<<"\n";
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
                //Link: https://codeforces.com/contest/1474/problem/A