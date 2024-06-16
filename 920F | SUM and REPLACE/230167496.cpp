//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define F first
#define S second
#define mod 1000000007
struct node
{
    int mn;
    int lazyflag=0, lazyval=0;
    node()
    {
        lazyflag=0;
        lazyval=0;
    }
};
 
node seg[4*300009];
ll aa[300009];
void build(int idx, int x, int y )
{
    if(x==y)
    {
        seg[idx].mn=aa[x];  //update me.
        return ;
    }
    int mid = (x + y)/2;
    int lft = 2*idx;
    int rgt = 2*idx + 1;
    build(lft, x, mid);
    build(rgt, mid+1,y);
    seg[idx].mn=seg[lft].mn+seg[rgt].mn;  //update me.
}
 
int query(int idx, int st, int ed, int x, int y)
{
    if(st==x && ed==y)
    {
        return seg[idx].mn;
    }
    int mid = (st + ed)/2;
    int lft = 2*idx;
    int rgt = 2*idx + 1;
    if(y<=mid)
    {
        return query(lft,st,mid,x,y);
    }
    else if(x>mid)
    {
        return query(rgt,mid+1,ed,x,y);
    }
    else
    {
        ll a=query(lft,st,mid,x,mid);
        ll b=query(rgt,mid+1,ed,mid+1,y);
        return a+b;  //update me.
    }
    return 0;
}
 
void update(int idx,int st,int ed,int x,int y,int val)
{
    if(st==x&&ed==y)
    {
        seg[idx].mn=val;
        return;
    }
    int mid = (st + ed)/2;
    int lft = 2*idx;
    int rgt = 2*idx + 1;
    if(y<=mid)
    {
        update(lft,st,mid,x,y,val);
    }
    else if(x>mid)
    {
        update(rgt,mid+1,ed,x,y,val);
    }
    else
    {
        update(lft,st,mid,x,mid,val);
        update(rgt,mid+1,ed,mid+1,y,val);
    }
    seg[idx].mn=seg[lft].mn+seg[rgt].mn;    //update me.
}
 
void solve(){
    vector<ll>pr;
    ll i,j,k;
    ll bb[1000005]; memset(bb,0,sizeof bb);
    for(i=2;i<=1000000;i++){
        if(bb[i]==0){
            pr.push_back(i);
            for(j=i+i;j<=1000000;j+=i){
                bb[j]=1;
            }
        }
    }
    memset(bb,0,sizeof bb);
    for(i=1;i<=1000000;i++){
        ll cn=1;
        ll num=i;
        for(j=0;j<pr.size();j++){
            if(pr[j]*pr[j]>num)break;
            ll c=0;
            //cout<<pr[j]<<" ";
            while(num%pr[j]==0){
                c++;
                num/=pr[j];
            }
            cn*=(c+1);
        }
        if(num!=1)cn*=2;
        bb[i]=cn;
    }
    ll n,q; cin>>n>>q;
    set<ll>st;
    st.insert(n+3);
    for(i=1;i<=n;i++) st.insert(i);
    for(i=1;i<=n;i++){
        cin>>aa[i];
    }
    build(1,1,n);
    while(q--){
        ll c,l,r; cin>>c>>l>>r;
        if(c==1){
            for(auto ii=st.lower_bound(l);;){
                if(*ii>r) break;
                ll in=*ii;
                ii++;
                if(aa[in]<=2LL){
                    st.erase(in);
                    continue;
                }
                ll val=bb[aa[in]];
                aa[in]=val;
                update(1,1,n,in,in,val);
                if(val==2LL){
                    st.erase(in);
                }
            }
        }
        else{
            cout<<query(1,1,n,l,r)<<"\n";
        }
    }
 
 
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    //cin>>t;
    for(ll it=1;it<=t;it++){
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
 
                //Link: https://codeforces.com/contest/920/problem/F