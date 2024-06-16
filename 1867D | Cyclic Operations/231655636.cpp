//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,k,i,j; cin>>n>>k;
    ll aa[n+3];
    for(i=1;i<=n;i++){
        cin>>aa[i];
    }
    ll ok=1;
    ll time[n+2]; memset(time,0,sizeof time);
    if(k==1){
        for(i=1;i<=n;i++)ok&=(aa[i]==i);
    }
    for(i=1;i<=n&&k!=1;i++){
        ll cur=i;
        if(!time[cur]){
            set<ll>st;
            ll tm=0;
            while(!time[cur]){ st.insert(cur);
                time[cur]=++tm; cur=aa[cur];
            }
            if(st.find(cur)!=st.end()){
                if(tm-time[cur]+1!=k)ok=0;
            }
        }
    }
    if(ok) cout<<"YES\n";
    else cout<<"NO\n";
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
                //Link: https://codeforces.com/contest/1867/problem/D