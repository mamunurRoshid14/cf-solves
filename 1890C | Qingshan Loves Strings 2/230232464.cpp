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
    string aa;
    cin>>aa;
    if(n%2) {
        cout<<"-1\n";
        return;
    }
    string bb=aa;
    vector<ll>v;
    bool f=1;
    for(i=0; i<(ll)aa.size()/2; i++) {
        //cout<<aa<<"\n";
        ll nn=aa.size();
        ll r=nn-i-1;
        ll l=i;
        //cout<<l<<" "<<r<<"\n";
        if(v.size()>301) {
            break;
        }
        if(aa[l]==aa[r]) {
            if(aa[l]=='0') {
                v.push_back(r+1);
                string tm="";
                for(j=0; j<=r; j++) {
                    tm.push_back(aa[j]);
                }
                tm.push_back('0');
                tm.push_back('1');
                for(j=r+1; j<nn; j++) {
                    tm.push_back(aa[j]);
                }
                i--;
                aa=tm;
            }
            else{
                v.push_back(l);
                string tm="";
                for(j=0; j<l; j++) {
                    tm.push_back(aa[j]);
                }
                tm.push_back('0');
                tm.push_back('1');
                for(j=l; j<nn; j++) {
                    tm.push_back(aa[j]);
                }
                i--;
                aa=tm;
            }
        }
    }
    if(v.size()<=300) {
        cout<<v.size()<<"\n";
        for(auto ii:v) {
            cout<<ii<<" ";
        }
        cout<<"\n";
    }
    else{
        cout<<"-1\n";
        return;
    }
}
int main() {
     ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
     cin>>t;
    for(ll it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1890/problem/C