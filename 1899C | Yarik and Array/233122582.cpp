//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,i,j; cin>>n;
    ll aa[n]; for(i=0;i<n;i++) cin>>aa[i];
    vector<pair<ll,ll>>v;
    ll pre=0;
    for(i=1;i<n;i++){
        if(abs(aa[i-1]%2)==abs(aa[i]%2)){
            v.push_back({pre,i-1});
            pre=i;
        }
    }
    v.push_back({pre,n-1});
//    for(auto ii:v){
//        cout<<ii.F<<" "<<ii.S<<"\n";
//    }
 
    ll an=LLONG_MIN;
    for(auto ii:v){
        ll l=ii.F,r=ii.S;
        ll s=0;
        while(l<=r){
            s+=aa[l];
            an=max(s,an);
            if(s<0){
                s=0;
            }
            l++;
        }
       // cout<<an<<"\n\n";
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
                //Link: https://codeforces.com/contest/1899/problem/C