//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve() {
    ll a,b,c;
    cin>>a>>b>>c;
    ll aa=a,bb=b,cc=c;
    bool f1=0,f2=0,f3=0;
    ll cn=170;
    while(cn--) {
        ll mn=min(bb,cc);
        if(aa<0) break;
        if(mn==0) {
            if(bb==0) {
                bb++;
                aa--;
                cc--;
            } else {
                cc++;
                aa--;
                bb--;
            }
            continue;
        }
        bb-=mn;
        cc-=mn;
        aa+=mn;
        if(bb==0&&cc==0) {
            f1=1;
            break;
        }
    }
    cn=170;
    aa=b;
    bb=a;
    cc=c;
    while(cn--) {
        ll mn=min(bb,cc);
        if(aa<0) break;
        if(mn==0) {
            if(bb==0) {
                bb++;
                aa--;
                cc--;
            } else {
                cc++;
                aa--;
                bb--;
            }
            continue;
        }
        bb-=mn;
        cc-=mn;
        aa+=mn;
        if(bb==0&&cc==0) {
            f2=1;
            break;
        }
    }
    cn=170;
    aa=c;
    bb=b;
    cc=a;
    while(cn--) {
        ll mn=min(bb,cc);
        if(aa<0) break;
        if(mn==0) {
            if(bb==0) {
                bb++;
                aa--;
                cc--;
            } else {
                cc++;
                aa--;
                bb--;
            }
            continue;
        }
        bb-=mn;
        cc-=mn;
        aa+=mn;
        if(bb==0&&cc==0) {
            f3=1;
            break;
        }
    }
    if(f1) cout<<"1 ";
    else cout<<"0 ";
 
    if(f2) cout<<"1 ";
    else cout<<"0 ";
 
 
    if(f3) cout<<"1 ";
    else cout<<"0 ";
    cout<<"\n";
 
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
                //Link: https://codeforces.com/contest/1900/problem/B