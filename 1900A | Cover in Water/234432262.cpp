//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i; cin>>n;
    string aa; cin>>aa;
    ll cn=0;
    ll cc=0;
    for(i=0;i<n;i++){
        if(aa[i]=='.'){
            cn++;
            cc++;
        }
        if(aa[i]=='#'){
            cn=0;
        }
        if(cn==3){
            cout<<"2\n";
            return;
        }
    }
    cout<<cc<<"\n";
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1; it<=t; it++)
    {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1900/problem/A