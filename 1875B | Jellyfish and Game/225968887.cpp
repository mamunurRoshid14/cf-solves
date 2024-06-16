//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,m,k,i,j; cin>>n>>m>>k;
    multiset<ll>st1,st2;
    for(i=0;i<n;i++){
        cin>>j;st1.insert(j);
    }
    for(i=0;i<m;i++){
        cin>>j; st2.insert(j);
    }
    st1.insert(0);
    st2.insert(0);
    ll tm=min(200LL,k);
    if(k%2==1&&k>=tm){
        tm=201LL;
    }
    //cout<<tm<<" F\n";
    for(i=1;i<=tm;i++){
        if(i%2){
            ll a=*(++st1.begin());
            ll b=*(--st2.end());
            //cout<<a<<" "<<b<<"\n";
            if(a>b) continue;
            st1.insert(b);
            st2.insert(a);
            st1.erase((++st1.begin()));
            st2.erase((--st2.end()));
        }
        else{
            ll a=*(++st2.begin());
            ll b=*(--st1.end());
            //cout<<a<<" "<<b<<"\n";
            if(a>b) continue;
            st2.insert(b);
            st1.insert(a);
            st1.erase((--st1.end()));
            st2.erase((++st2.begin()));
        }
    }
    ll s=0;
    for(auto ii:st1) s+=ii;
    cout<<s<<"\n";
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
 
                //Link: https://codeforces.com/contest/1875/problem/B