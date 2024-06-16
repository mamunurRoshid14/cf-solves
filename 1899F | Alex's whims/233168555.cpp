//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,q,i,j; cin>>n>>q;
    for(i=1;i<n;i++){
        cout<<i<<" "<<i+1<<"\n";
    }
    ll cur=n-1;
    ll p=n-1;
    while(q--){
        ll d; cin>>d;
        if(d==cur){
            cout<<"-1 -1 -1\n";
        }
        else{
            cout<<n<<" "<<p<<" "<<d<<"\n";
            p=d;
            cur=d;
        }
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
 
                //Link: https://codeforces.com/contest/1899/problem/F