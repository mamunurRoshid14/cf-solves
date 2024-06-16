//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    string aa; cin>>aa;
    ll an=aa.size();
    aa="1"+aa;
    for(ll i=1;i<aa.size();i++){
        ll a=abs(aa[i]-aa[i-1]);
        if((aa[i]=='0'||aa[i-1]=='0')&&a>0){
            a=(10-a);
        }
        an+=a;
    }
    cout<<an<<"\n";
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
 
                //Link: https://codeforces.com/contest/1883/problem/A