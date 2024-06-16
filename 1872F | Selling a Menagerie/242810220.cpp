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
 
void solve() {
    //First, confirm your idea with pen and paper.
    ll n,i,j;
    cin>>n;
    ll aa[n+3],bb[n+3],f[n+2];
    memset(f,0,sizeof f);
    multiset<ll>st;
    for(i=1; i<=n; i++) {
        cin>>aa[i];
        st.insert(aa[i]);
    }
    for(i=1; i<=n; i++)cin>>bb[i];
    vector<ll>tt;
    for(i=1; i<=n; i++) {
        if(st.find(i)==st.end()){
            tt.push_back(i);
        }
    }
    for(i=0;i<tt.size();i++){
        cout<<tt[i]<<" ";
        ll ii=tt[i];
        st.erase(st.find(aa[ii]));
        if(st.find(aa[ii])==st.end()&&aa[ii]!=0){
            tt.push_back(aa[ii]);
 
        }
        aa[ii]=0;
    }
    //cout<<"\n\n";
    for(i=1; i<=n; i++) {
        if(aa[i]) {
            vector<ll>v;
            ll in=i;
            while(aa[in]!=0) {
                v.push_back(in);
                in=aa[in];
                aa[v.back()]=0;
            }
            ll mn=LL_INF,mni=n;
            for(j=0; j<v.size(); j++) {
                ll ii=v[j];
                if(bb[ii]<mn) {
                    mn=bb[ii];
                    mni=j;
                }
            }
//            for(auto ii:v){
//                cout<<ii<<" ";
//            }
//            cout<<"\n"<<mni<<" "<<mn<<"\n\n";
 
            vector<ll>vv;
            for(j=mni+1; j<v.size(); j++) {
                vv.push_back(v[j]);
            }
            for(j=0; j<=mni; j++)vv.push_back(v[j]);
            //reverse(vv.begin(),vv.end());
            for(auto ii:vv)cout<<ii<<" ";
        }
    }
    cout<<"\n\n";
 
    return;
}
 
int32_t main() {
//    ios::sync_with_stdio(false); cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1; it<=t; it++) {
        //cout<<"Case "<<it<<": ";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1872/problem/F