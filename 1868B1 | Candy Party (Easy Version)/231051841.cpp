//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j,s=0; cin>>n;
    ll aa[n]; for(i=0;i<n;i++){cin>>aa[i];s+=aa[i];}
    if(s%n){
        cout<<"NO\n";
        return;
    }
    ll av=s/n;
    multiset<ll>stx,sty;
    map<ll,ll>mp;
    ll num=1;for(i=0;i<33;i++){
        mp[num]=i; num*=2LL;
    }
    bool f=1;ll cn=0;
    for(i=0;i<n;i++){
        if(aa[i]==av){
            continue;
        }
        num=1; f=0;
        for(j=0;j<31;j++){
            if(aa[i]-num>=av){
                num*=2; continue;
            }
            ll tm=av-(aa[i]-num);
            if(mp.find(tm)!=mp.end()){
                stx.insert(j);
                sty.insert(mp[tm]); f=1;
                //cout<<i<<" "<<pow(2,j)<<" "<<tm<<"\n";
                break;
            }
            num*=2LL;
        }
        if(f==0){
            cout<<"NO\n";
            return;
        }
    }
    for(auto ii:stx){
        if(sty.find(ii)!=sty.end())sty.erase(sty.find(ii));
    }
    if(sty.size()==0&&sty.size()==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
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
                //Link: https://codeforces.com/contest/1868/problem/B1