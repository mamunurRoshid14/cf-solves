//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j; cin>>n;
    ll ans=LLONG_MAX;
    ll aa[n];
    map<ll,ll>mp;
    for(i=0;i<n;i++){
        cin>>aa[i];
        mp[aa[i]]++;
    }
    ll cn=0;
    for(i=0;i<=n;i++){
        if(mp[i]==0){
            cn=i;
            break;
        }
    }
    ll dsu[n+2];
    ll cost[n+2];
    memset(dsu,0,sizeof dsu);
    memset(cost,0,sizeof cost);
    dsu[cn]=cn;
    cost[cn]=0;
    for(i=cn-1;i>=0;i--){
        ll tm=LLONG_MAX;
        ll in=cn;
        for(j=i+1;j<=cn;j++){
            ll a=(mp[i]-1)*j+cost[j]+j;
            if(a<tm){
                tm=a;
                in=j;
            }
        }
        dsu[i]=in;
        cost[i]=tm;
    }
    ans=0;
    ll cc=0;
//    for(i=0;i<=cn;i++){
//        cout<<i<<" "<<dsu[i]<<"\n";
//    }
    //cout<<"\n";
    while(cc<cn){
        ll a=dsu[cc];
        ans+=(a*(mp[cc]));
        //cout<<cc<<" "<<dsu[cc]<<"\n";
        cc=dsu[cc];
    }
    cout<<ans-cn<<"\n";
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
 
                //Link: https://codeforces.com/contest/1875/problem/D