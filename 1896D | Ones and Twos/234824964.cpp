//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
struct ST {
#define lc (n << 1)
#define rc ((n << 1) | 1)
    vector<ll>t,ss;
    ST(ll n,vector<ll>v) {
        t.resize(4*n,0);
        ss=v;
    }
    inline int combine(int a, int b) {
        return (a+ b); //merge left and right queries
    }
    inline void pull(int n) {
        t[n] = (t[lc]+ t[rc]); //merge lower nodes of the tree to get the parent node
    }
    void build(int n, int b, int e) {
        if(b == e) {
            t[n] = ss[b];
            return;
        }
        int mid = (b + e) >> 1;
        build(lc, b, mid);
        build(rc, mid + 1, e);
        pull(n);
    }
    void upd(int n, int b, int e, int i, int j, int v) { //upd(1,1,n,l,r,val) call in this wa
        if(j < b || e < i) return;
        if(i <= b && e <= j) {
            t[n]=v;
            return;
        }
        int mid = (b + e) >> 1;
        upd(lc, b, mid, i, j, v);
        upd(rc, mid + 1, e, i, j, v);
        pull(n);
    }
    int query(int n, int b, int e, int i, int j) {   //quer(1,1,n,l,r)  call in this way
        if(i > e || b > j) return 0;
        if(i <= b && e <= j) return t[n];
        int mid = (b + e) >> 1;
        return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
    }
} ;
 
 
void solve(){
    ll n,q,i,j; cin>>n>>q;
    ll aa[n+2];
    set<ll>st;
    vector<ll>v; v.push_back(0);
    for(i=1;i<=n;i++){
        cin>>aa[i];
        v.push_back(aa[i]);
        if(aa[i]==1){
            st.insert(i);
        }
    }
    ST t(n,v);
    t.build(1,1,n);
    //cout<<t.query(1,1,n,1,n)<<"\n";
    while(q--){
        ll c; cin>>c;
        if(c==1){
            ll s; cin>>s;
            ll ss=t.query(1,1,n,1,n);
            if(st.size()==0){
                if(ss%2==s%2&&s<=ss){
                    cout<<"YES\n";
                }
                else{
                    cout<<"NO\n";
                }
 
 
                continue;
            }
            ll f=*(st.begin());
            ll l=*(--st.end());
            ll s1=t.query(1,1,n,f,n);
            ll s2=t.query(1,1,n,1,l);
            bool ff=1;
            if(s>ss) ff=0;
            if(s%2==1){
                if(ss%2!=s%2){
                    if(max(s1,s2)<s) ff=0;
                }
            }
            if(s%2==0){
                if(ss%2!=s%2){
                    if(max(s1,s2)<s) ff=0;
                }
            }
            if(ff){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
            //cout<<s<<" "<<ss<<" "<<s1<<" "<<s2<<"\n";
        }
        else{
            ll in,v; cin>>in>>v;
            if(aa[in]==1){
                st.erase(in);
                
            }
            if(v==1){
                    st.insert(in);
                }
            aa[in]=v;
            t.upd(1,1,n,in,in,v);
            //cout<<t.query(1,1,n,1,n)<<"\n";
        }
    }
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
                //Link: https://codeforces.com/contest/1896/problem/D