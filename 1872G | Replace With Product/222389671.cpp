//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve() {
    ll n,i,j;
    cin>>n;
    ll aa[n+20];
    ll bb[n+20];
    ll cc[n+20];
    vector<ll>v;
    for(i=1; i<=n; i++) {
        cin>>aa[i];
        bb[i]=aa[i];
        cc[i]=aa[i];
        if(aa[i]>1LL){
            v.push_back(i);
        }
    }
 
    bb[0]=0;
    for(i=1; i<=n; i++) {
        bb[i]+=bb[i-1];
    }
    cc[0]=1;
    bool f=false;
    for(i=1; i<=n; i++) {
        cc[i]*=cc[i-1];
        if(cc[i]>2LL*n) {
            f=true;
            break;
        }
    }
 
    ll l=1,r=n;
    if(f) {
        while(l<r&&aa[l]==1) {
            l++;
        }
        while(l<r&&aa[r]==1) {
            r--;
        }
        cout<<l<<" "<<r<<"\n\n";
        return;
    }
    r=1;
    ll an=-1LL;
    for(i=0;i<v.size();i++){
        for(j=0;j<v.size();j++){
            ll a=v[i];
            ll b=v[j];
            if(a>b) swap(a,b);
            ll as=bb[n]-(bb[b]-bb[a-1]);
            ll am=cc[b]/cc[a-1];
            am+=as;
           //cout<<a<<" "<<b<<" "<<am<<" "<<an<<"\n";
            if(am>an){
                l=a;
                r=b;
                an=am;
            }
        }
    }
    cout<<l<<" "<<r<<"\n\n";
}
int main() {
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1872/problem/G