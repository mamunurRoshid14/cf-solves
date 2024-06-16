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
    ll aa[n];
    for(i=0; i<n; i++) {
        cin>>aa[i];
    }
    sort(aa,aa+n);
    ll ans=0;
    ll l=0,r=n-1;
    ll s=0;
    while(l<r) {
        if(s+aa[l]<=aa[r]) {
            s+=aa[l];
            ans+=aa[l];
            aa[l]=0;
            l++;
        } else {
            ll tm=aa[r]-s;
            aa[l]-=tm;
            ans+=tm;
            ans++;
            aa[r]=0;
            s=0;
            r--;
        }
    }
    sort(aa,aa+n);
//    for(i=0; i<n; i++) {
//        cout<<aa[i]<<" ";
//    }
//
//    cout<<"\n"<<ans<<"\n";
    while(aa[n-1]>0) {
        ll ss=s+aa[n-1];
        ss/=2;
        if(ss>=s) {
            ans+=(ss-s);
            aa[n-1]-=(ss-s);
            s=ss;
        }
        //cout<<aa[n-1]<<"\n";
        if(aa[n-1]==0) {
            break;
        }
        if(s) {
            aa[n-1]-=s;
 
            ans++;
            s=0;
        }
        if(aa[n-1]==1) {
            ans++;
            break;
        }
    }
    cout<<ans<<"\n";
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
 
                //Link: https://codeforces.com/contest/1891/problem/C