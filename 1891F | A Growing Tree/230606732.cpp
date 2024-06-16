//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long
#define F first
#define S second
#define mod 1000000007
#define N (ll)5e5+9
vector<ll>ad[N];
ll st[N],ed[N],T;
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
node seg[8*N];
void push(ll n){
    if(seg[n].lazyval==0)return;
    seg[n].mn+=seg[n].lazyval;
    ll lft=n*2;
    ll rgt=lft+1;
    seg[lft].lazyval+=seg[n].lazyval;
    seg[rgt].lazyval+=seg[n].lazyval;
    seg[n].lazyval=0;
}
void build(int idx, int x, int y )
{
    seg[idx].lazyval=0;
    if(x==y)
    {
        seg[idx].mn=0;  //update me.
        seg[idx].lazyval=0;
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
    push(idx);
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
    push(idx);
    if(st==x&&ed==y)
    {
        seg[idx].lazyval=val;
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
ll par[N];
void dfs(ll v,ll p){
    T++;
    st[v]=T;
    par[v]=p;
    for(auto ii:ad[v]){
        if(ii!=p){
            dfs(ii,v);
        }
    }
    //T++;
    ed[v]=T;
}
void solve(){
    ll n,cn=1,i;
    cin>>n;
    ll s[n];
    ad[1].clear();
    vector<pair<ll,ll>>vv;
    for(i=0;i<n;i++){
        ll t; cin>>t;
        if(t==1){
            cn++;
            ad[cn].clear();
            ll v; cin>>v;
            ad[v].push_back(cn);
            ad[cn].push_back(v);
            s[i]=v;
        }
        else{
            ll v,x; cin>>v>>x;
            vv.push_back({v,x});
            s[i]=-1;
        }
    }
    ll nn;
    T=0;
    dfs(1,0);
    nn=T;
    build(1,1,nn);
    ll ii=0;
    ll sum[nn];
    cn=1;
    memset(sum,0,sizeof sum);
    for(i=0;i<n;i++){
        if(s[i]==-1){
            ll v=vv[ii].F;
            ll x=vv[ii].S;
            ii++;
            update(1,1,nn,st[v],ed[v],x);
            sum[v]+=x;
        }
        else{
            cn++;
            ll p=s[i];
            ll v=cn;
            ll val=query(1,1,nn,st[p],st[p]);
            //cout<<v<<" "<<val<<"\n";
            update(1,1,nn,st[v],ed[v],-val);
        }
    }
    //cout<<nn<<"\n";
    for(i=1;i<=cn;i++){
        //cout<<st[i]<<" "<<ed[i]<<"\n";
       cout<<query(1,1,nn,st[i],st[i])<<" ";
    }
    cout<<"\n";
}
int32_t main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
   cin>>t;
    for(ll it=1;it<=t;it++){
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
 
                //Link: https://codeforces.com/contest/1891/problem/F