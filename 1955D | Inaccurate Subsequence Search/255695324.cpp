//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define LL_INF (1LL << 62)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
void solve(){
    //First, confirm your idea with pen and paper.
    ll n,m,k,i,j; cin>>n>>m>>k;
    ll aa[n],bb[m],cc[m];
    for(i=0;i<n;i++)cin>>aa[i];
    for(i=0;i<m;i++)cin>>bb[i];
    multiset<ll>mt,ub,ua;
    for(i=0;i<m;i++){
        ua.insert(aa[i]);
        ub.insert(bb[i]);
    }
    for(auto ii:ub){
        if(ua.find(ii)!=ua.end()){
            mt.insert(ii);
            ua.erase(ua.find(ii));
        }
    }
    for(auto ii:mt){
        ub.erase(ub.find(ii));
    }
    ll an=0;
    if(mt.size()>=k)an++;
    for(i=m;i<n;i++){
        ll r=aa[i-m];
        ll c=aa[i];
 
        if(ua.find(r)!=ua.end()){
            ua.erase(ua.find(r));
        }
        else{
            mt.erase(mt.find(r));
            ub.insert(r);
        }
 
        if(ub.find(c)!=ub.end()){
            ub.erase(ub.find(c));
            mt.insert(c);
        }
        else{
            ua.insert(c);
        }
 
        if(mt.size()>=k)an++;
 
 
    }
    cout<<an<<"\n";
 
 
    return;
}
int32_t main(){
    ios::sync_with_stdio(false); cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1;it<=t;it++){
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1955/problem/D