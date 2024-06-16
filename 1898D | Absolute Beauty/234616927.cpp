//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    int n;cin >> n;
        vector<pair<int,int>>a(n);
        for(auto &[x,y] : a)cin >> x;
        for(auto &[x,y] : a)cin >> y;
        sort(a.begin(),a.end());
        ll ans=0, mx=0;
        int pq=INT_MAX;
        for(int i=0;i<n;i++)
        {
            auto [x,y]=a[i];
            ans += abs(x-y);
            if(i)mx=max(mx, 2ll*(min(x,y)-pq));
            pq=min(pq,max(x,y));
        }
        cout << ans+mx << '\n';
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
                //Link: https://codeforces.com/contest/1898/problem/D