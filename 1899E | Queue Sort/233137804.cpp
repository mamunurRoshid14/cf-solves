//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j,mn=INT_MAX;
     cin>>n;
     ll aa[n];
     ll in=0;
     for(i=0;i<n;i++){
        cin>>aa[i];
        if(aa[i]<mn){
            mn=aa[i];
            in=i;
        }
     }
     for(i=in+1;i<n;i++){
        if(aa[i]<aa[i-1]){
            cout<<"-1\n";
            return;
        }
     }
     cout<<in<<"\n";
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
                //Link: https://codeforces.com/contest/1899/problem/E