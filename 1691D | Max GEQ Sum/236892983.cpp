//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define int long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define CC(x) cout << "Case " << ++x << ":";
#define nn "\n"
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
 
ll mx[800005];
ll mxl[800005];
ll mxr[800005];
ll sum[800005];
ll aa[200005];
ll pre[200005];
void pushup(int x) {
    sum[x] = sum[x<<1] + sum[x<<1|1];
    mxl[x] = max(mxl[x<<1],sum[x<<1] + mxl[x<<1|1]);
    mxr[x] = max(mxr[x<<1|1], sum[x<<1|1] + mxr[x<<1]);
}
void build(int x, int l, int r) {
    if (l == r) {
        mxl[x] = max(0LL,aa[r]);
        mxr[x] = max(0LL,aa[r]);
        sum[x] = aa[r];
    } else {
        int mid = (l + r) >> 1;
        build(x<<1, l, mid);
        build(x<<1|1,mid+1,r);
        pushup(x);
    }
}
ll query1(int x,int l,int r,int i,int j) {
    if(i > r || l > j)return -LL_INF;
    if(l>=i&&r<=j) {
        return mxr[x];
    }
    int mid = (l + r) >> 1;
    if(j<=mid) {
        return query1(x<<1, l, mid,i,j);
    } else if(i>mid) {
        return query1(x<<1|1,mid+1,r,i,j);
    } else {
        ll a=query1(x<<1, l, mid,i,mid);
        ll b=query1(x<<1|1,mid+1,r,mid+1,j);
        return max(a+pre[j]-pre[mid],b);
    }
}
 
ll query2(int x,int l,int r,int i,int j) {
    if(i > r || l > j)return -LL_INF;
    if(l>=i&&r<=j) {
        return mxl[x];
    }
    int mid = (l + r) >> 1;
    if(j<=mid) {
        return query2(x<<1, l, mid,i,j);
    } else if(i>mid) {
        return query2(x<<1|1,mid+1,r,i,j);
    } else {
        ll a=query2(x<<1, l, mid,i,mid);
        ll b=query2(x<<1|1,mid+1,r,mid+1,j);
        return max(a,b+pre[mid]-pre[i-1]);
    }
}
 
 
void solve() {
    ll n,i,j;
    cin>>n;
    for(i=1; i<=n; i++) cin>>aa[i];
    pre[0]=0; for(i=1;i<=n;i++){
        pre[i]=pre[i-1]+aa[i];
    }
 
    build(1,1,n);
    ll lr[n+2],rr[n+2];
    stack<ll>st;
    for(i=1; i<=n; i++) {
        if(st.size()&&aa[st.top()]<aa[i]) {
            rr[st.top()]=i-1;
            st.pop();
            i--;
            continue;
        }
        st.push(i);
    }
    while(st.size()) {
        rr[st.top()]=n;
        st.pop();
    }
    for(i=n; i>=1; i--) {
        if(st.size()&&aa[st.top()]<aa[i]) {
            lr[st.top()]=i+1;
            st.pop();
            i++;
            continue;
        }
        st.push(i);
    }
    while(st.size()) {
        lr[st.top()]=1;
        st.pop();
    }
    bool f=1;
    for(i=1; i<=n; i++) {
        ll l=lr[i],r=i;
        ll mxx=query1(1,1,n,lr[i],i-1);
        ll mxx2=query2(1,1,n,i+1,rr[i]);
        mxx=max(mxx,mxx2);
        if(mxx>0) f=0;
    }
    if(f) cout<<"YES\n";
    else cout<<"NO\n";
    return;
}
 
int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
     cin >> t;
    for(int it=1; it<=t; it++) {
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1691/problem/D