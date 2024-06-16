//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve() {
    ll q;
    cin>>q;
    multiset<ll>st1,st2;
    while(q--) {
        ll l,r;
        string ch;
        cin>>ch;
        if(ch=="+") {
            cin>>l>>r;
            st1.insert(r);
            st2.insert(l);
            if(st1.size()<=1) {
                cout<<"NO\n";
            } else {
                ll a,b;
                a=*st1.begin();
                b=*(--st2.end());
                if(a<b) {
                    cout<<"YES\n";
                } else {
                    cout<<"NO\n";
                }
            }
        } else {
            cin>>l>>r;
            st1.erase(st1.find(r));
            st2.erase(st2.find(l));
            if(st1.size()<=1) {
                cout<<"NO\n";
            } else {
                ll a,b;
                a=*st1.begin();
                b=*(--st2.end());
                if(a<b) {
                    cout<<"YES\n";
                } else {
                    cout<<"NO\n";
                }
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    //cin>>t;
    for(ll it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
 
                //Link: https://codeforces.com/contest/1883/problem/D