//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
vector<int>v[100005];
void solve() {
    int n,i,j;
    cin>>n;
    int aa[n+1];
    for(i=0; i<n; i++) cin>>aa[i];
    sort(aa,aa+n);
    int mp[100005]; memset(mp,0,sizeof mp);
    ll an=0;
    for(i=0; i<n; i++) {
        ll nn=0;
        vector<pair<int,int >>vv;
        for(auto ii:v[aa[i]]) {
            ll cn=mp[ii];
            nn+=ii*cn;
            for(auto iii:v[ii]) {
                mp[iii]-=cn;
                vv.push_back({iii,cn});
            }
            mp[ii]++;
        }
        for(auto iii:vv) {
            mp[iii.F]+=iii.S;
        }
        an+=((ll)nn*(ll)(n-i-1));
    }
    cout<<an<<"\n";
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t=1;
    int i,j;
    for(i=1; i<=100000; i++) {
        for(j=1; j*j<=i; j++) {
            if(i%j==0) {
                v[i].push_back(j);
                if(j*j!=i) {
                    v[i].push_back(i/j);
                }
            }
        }
        sort(v[i].rbegin(),v[i].rend());
    }
    cin>>t;
    for(int it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1900/problem/D