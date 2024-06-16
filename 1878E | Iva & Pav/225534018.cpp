//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define N '\n'
#define S " "
//perfectly working segment tree with lazy
struct node
{
    ll mn;
};
node seg[800009];
ll aa[500000];
void build(int idx, int x, int y )
{
    if(x==y)
    {
        seg[idx].mn=aa[x];
        return;
    }
    int mid = (x + y)/2;
    int lft = 2*idx;
    int rgt = 2*idx + 1;
 
    build(lft, x, mid);
    build(rgt, mid+1,y);
 
    seg[idx].mn = (seg[lft].mn & seg[rgt].mn) ;
}
 
ll query(int idx, int st, int ed, int x, int y)
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
        int a = query(lft,st,mid,x,mid);
        int b = query(rgt,mid+1,ed,mid+1,y);
        return (a&b);
    }
}
 
void solve(){
    ll n,i,j; cin>>n;
    for(i=1;i<=n;i++) cin>>aa[i];
    build(1,1,n);
    ll q; cin>>q; while(q--){
        ll l,k; cin>>l>>k;
        ll L=l,R=n;
        if(aa[l]<k){
            cout<<"-1 ";
            continue;
        }
        ll an=l;
        while(L<=R){
            ll m=(L+R)/2;
            ll tm=query(1,1,n,l,m);
           //cout<<l<<" "<<m<<" "<<tm<<"\n";
            if(tm>=k){
                an=m;
                L=m+1;
            }
            else{
                R=m-1;
            }
        }
        cout<<an<<" ";
    }
    cout<<"\n";
}
 
int main() {
    ll t=1;
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin>>t;
    for(ll it=1;it<=t;it++){
        //cout<<"Case "<<it<<":\n";
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1878/problem/E