//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
long long mod = 998244353;
void solve(){
    int n; cin >> n;
    long long a[n];
    long long ans = 0;
    for(int i=0; i<n; i++)cin >> a[i];
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j+=i+1)a[i]=max(a[i], a[j]);
    }
    sort(a, a+n);
    long long binpow[n];
    binpow[0]=1;
    for(int i=1; i<n; i++){
        binpow[i]=(binpow[i-1]*2ll)%mod;
    }
    for(int i=0; i<n; i++){
        ans=((binpow[i]*a[i])%mod+ans)%mod;
    }
    cout << ans;
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
                //Link: https://codeforces.com/contest/1877/problem/D