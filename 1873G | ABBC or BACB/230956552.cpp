//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve() {
    string aa;
    cin>>aa;
    ll i,j,an=0,n=aa.size(),cn=0;
    for(i=0; i<n; i++) {
        if(aa[i]=='B') {
            ll ccc=0;
            if(i>0&&aa[i-1]=='A')ccc++;
            if(i<n&&aa[i+1]=='A') ccc++;
            if(ccc)cn++;
        }
    }
    vector<ll>vv;
    for(i=0; i<n; i++) {
        if(aa[i]=='B') {
            ll cc=1;
            while(i-cc>=0&&aa[i-cc]=='A') {
                aa[i-cc]='C';
                cc++;
            }
            cc--;
            ll cc2=1;
            while(i+cc2<n&&aa[i+cc2]=='A') {
                aa[i+cc2]='C';
                cc2++;
            }
            cc2--;
            if(cc) vv.push_back(cc);
            if(cc2) vv.push_back(cc2);
        }
 
    }
    sort(vv.rbegin(),vv.rend());
    for(i=0; i<vv.size()&&i<cn; i++) {
        an+=vv[i];
    }
    cout<<an<<"\n";
 
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1873/problem/G