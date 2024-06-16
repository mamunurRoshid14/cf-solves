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
void solve() {
    ll n,i,j;cin>>n;
    string aa;cin>>aa;
    ll cn1=0,cn2=0,cn3=0,cn4=0;
    for(auto ii:aa){
        if(ii=='N')cn1++;
        else if(ii=='S')cn2++;
        else if(ii=='E')cn3++;
        else cn4++;
    }
    if(cn1%2!=cn2%2||cn3%2!=cn4%2){
        cout<<"NO\n";
        return;
    }
    ll c1,c2,c3,c4;
    c1=(cn1+1)/2;
    c2=(cn2+1)/2;
    c3=(cn3+1)/2;
    c4=(cn4+1)/2;
    for(i=0;i<n;i++){
        char ii=aa[i];
        if(ii=='N'){
            if(c1){
                aa[i]='R';
                c1--;
            }
            else{
                aa[i]='H';
            }
        }
        else if(ii=='S'){
            if(c2){
                aa[i]='R';
                c2--;
            }
            else{
                aa[i]='H';
            }
        }
        else if(ii=='E'){
            if(c3){
                aa[i]='H';
                c3--;
            }
            else{
                aa[i]='R';
            }
        }
        else{
            if(c4){
                aa[i]='H';
                c4--;
            }
            else{
                aa[i]='R';
            }
        }
    }
    c1=0,c2=0;
    for(auto ii:aa){
        if(ii=='R')c1++;
        else c2++;
    }
    if(c1==0||c2==0){
        cout<<"NO\n";
        return;
    }
    cout<<aa<<"\n";
 
    return;
}
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1974/problem/D