//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,m,j,i; cin>>n>>m;
    string aa,bb; cin>>aa>>bb;
    bool fb=1;
    for(i=0;i<m-1;i++){
        if(bb[i]==bb[i+1]){
            fb=0;
        }
    }
    bool fa=1;
    for(i=0;i<n-1;i++){
        if(aa[i]==aa[i+1]){
            fa=0;
        }
    }
    if(fa){
        cout<<"Yes\n";
        return;
    }
    if(fb==0||m%2==0){
        cout<<"No\n";
        return;
    }
    bool f=1;
    for(i=0;i<n-1;i++){
        if(aa[i]==aa[i+1]){
            if(aa[i]==bb[0]){
                f=0;
            }
        }
    }
    if(f){
        cout<<"Yes\n";
    }
    else {
        cout<<"No\n";
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1;it<=t;it++){
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
 
                //Link: https://codeforces.com/contest/1890/problem/B