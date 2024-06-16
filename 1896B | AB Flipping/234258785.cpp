//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i; cin>>n;
    string  aa; cin>>aa;
    ll in1=n+1,in2=-1;
    for(i=0;i<n;i++){
        if(aa[i]=='A'){
            in1=i;
            break;
        }
    }
    for(i=n-1;i>=0;i--){
        if(aa[i]=='B'){
            in2=i;
            break;
        }
    }
    ll an=(in2-in1);
    an=max(0LL,an);
    cout<<an<<"\n";
}
int main(){
    //ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1; it<=t; it++)
    {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1896/problem/B