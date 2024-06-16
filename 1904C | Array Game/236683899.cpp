//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define YES cout << "YES\n"
#define NO cout << "NO\n"
#define CC(x) cout << "Case " << ++x << ":";
#define nn "\n"
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 1000006
 
void solve(){
    ll n,k,i,j; cin>>n>>k;
    vector<ll>v;
    for(i=0;i<n;i++){
        ll tm; cin>>tm;v.push_back(tm);
    }
    sort(v.begin(),v.end());
    if(k>2)cout<<"0\n";
    else if(k==2){
        ll mn=v[0];
        multiset<ll>st;
        multiset<ll,greater<ll>>st2;
        for(i=0;i<n;i++)st.insert(v[i]);
        for(i=0;i<n;i++)st2.insert(v[i]);
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i==j) continue;
                ll tm=abs(v[i]-v[j]);
                mn=min(mn,tm);
                if(st.lower_bound(tm)!=st.end()){
                    ll a=*st.lower_bound(tm);
                    mn=min(mn,abs(tm-a));
                }
                if(st2.lower_bound(tm)!=st2.end()){
                    ll a=*st2.lower_bound(tm);
                    mn=min(mn,abs(tm-a));
                }
            }
        }
        cout<<mn<<"\n";
    }
    else{
        ll mn=v[0];
        for(i=1;i<n;i++){
            mn=min(v[i]-v[i-1],mn);
        }
        cout<<mn<<"\n";
    }
    return;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t=1;
    cin >> t;
    for(int it=1;it<=t;it++){
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1904/problem/C