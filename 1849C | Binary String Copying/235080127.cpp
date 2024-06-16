//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    ll n,m,i,j; cin>>n>>m;
    string aa; cin>>aa; aa=" "+aa+" ";
    ll cn0[n+3],cn1[n+3]; cn0[0]=0; cn1[0]=0;
    ll pre[n+3];
    ll p=1;
    for(i=1;i<=n;i++){
        cn0[i]=cn0[i-1]+(aa[i]=='0');
        cn1[i]=cn1[i-1]+(aa[i]=='1');
        if(aa[i-1]=='1'&&aa[i]=='0') p=i;
        pre[i]=p;
    }
    set<pair<ll,ll>>st; ll f=0;
    while(m--){
        ll l,r; cin>>l>>r;
        if(pre[r]<=l){
            f=1; continue;
        }
        ll tm0=cn0[r]-cn0[l-1];
        ll tm1=cn1[r]-cn1[l-1];
        if(tm0){
            ll L=1,R=l-1;
            while(L<=R){
                ll m=(L+R)/2;
                ll cc=cn1[l-1]-cn1[m-1];
                if(cc==0){
                    R=m-1;
                    l=m;
                }
                else{
                    L=m+1;
                }
            }
        }
        if(tm1){
            ll L=r+1,R=n;
            while(L<=R){
                ll m=(L+R)/2;
                ll cc=cn0[m]-cn0[r];
                if(cc==0){
                    L=m+1;
                    r=m;
                }
                else{
                    R=m-1;
                }
            }
        }
        st.insert({l,r});
    }
    cout<<st.size()+f<<"\n\n";
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1; it<=t; it++)
    {
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1849/problem/C