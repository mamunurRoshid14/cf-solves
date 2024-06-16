//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j; cin>>n;
    vector<ll>v; v.push_back(6);
    v.push_back(8);
    cout<<"6 8 ";
    ll s=14;n-=2;
    i=9;
    ll in=0;
    while(n){
        if((3*i)%s==0){
            i++;
            continue;
        }
        cout<<i<<" ";
        s+=i;
        s-=v[in];
 
        v.push_back(i);
        in++;i++;
        n--;
    }
    cout<<"\n";
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
 
                //Link: https://codeforces.com/contest/1878/problem/B