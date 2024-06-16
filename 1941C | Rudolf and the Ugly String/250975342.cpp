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
    ll n,i,j;string aa; cin>>n>>aa;
    ll an=0;
    for(i=1;i<n-1;i++){
        if(aa[i-1]=='m'&&aa[i]=='a'&&aa[i+1]=='p'){
            an++;
            if(i+2<n&&aa[i+2]!='p'){
                aa[i+1]='1';
            }
            else 
            aa[i]='1';
        }
        else if(aa[i-1]=='p'&&aa[i]=='i'&&aa[i+1]=='e'){
            an++;
            aa[i]='1';
        }
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
                //Link: https://codeforces.com/contest/1941/problem/C