//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j; cin>>n;
    ll aa[n+20];
    for(i=1;i<=n;i++){
        cin>>aa[i];
    }
    ll x0=0,x1=0;
    string bb; cin>>bb;
    aa[0]=0;
    for(i=1;i<=n;i++){
        if(bb[i-1]=='0'){
            x0=x0^aa[i];
        }
        else{
            x1=x1^aa[i];
        }
        aa[i]=aa[i]^aa[i-1];
    }
    ll q; cin>>q;
    while(q--){
        ll c; cin>>c;
        if(c==1){
            ll l,r; cin>>l>>r;
            ll a=aa[r]^aa[l-1];
            x0^=a;
            x1^=a;
        }
        else{
            ll l; cin>>l;
            if(l==0LL){
                cout<<x0<<" ";
            }
            else{
                cout<<x1<<" ";
            }
        }
    }
    cout<<"\n";
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
 
 
                //Link: https://codeforces.com/contest/1872/problem/E