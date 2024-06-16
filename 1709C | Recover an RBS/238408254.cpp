//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
 
#define REP(i,n) for (ll i = 1; i <= n; i++)
#define      ll    long long int
#define      pb    push_back
#define      eb    emplace_back
#define      ff    first
#define      ss    second
#define      endl  "\n"
#define      FASTIO        ios_base::sync_with_stdio(false);cin.tie(NULL);//cout.tie(NULL);
#define      TEST    ll t ; cin >> t ; while( t -- )
#define      pii     pair < ll , ll >
//long mn =  *min_element(arr, arr+n);
 
ll const SIZE = 1e5 ;
ll const Max = 1e18 ;
 
bool ok( string s){
 
    int n = s.size( ) , x = 0 ;
    for(int i = 0 ; i < n ; i++){
        if(s[i] == '(')x++;
        else x--;
        if(x < 0)return 0 ;
    }
    if(x)return 0;
    return 1;
}
 
int  main (  ) {
    FASTIO ;
 
    TEST{
        string s;cin >> s;
        int n = s.size( ) , l = 0 , r= 0 ,q = 0;
        for(auto ch : s){
            if(ch == '(')l++;
            else if(ch == ')')r++;
            else q++ ;
        }
        if(l == (n/2) || r == (n/2) )cout << "YES" << endl ;
        else{
            int lagbe = (n/2) - l -1 , f=0;
            for(int i = 0 ; i < n ; i++ ){
                if( s[ i ] == '?' && lagbe ){
                    s[i] = '(' ;lagbe--;
                }
                else if(s[i] == '?'){
                    if(!f){
                        lagbe = 1 ;f = 1 ;
                    }
                    s[i] = ')' ;
                }
            }
            if(ok(s))cout << "NO" << endl ;
            else cout << "YES" << endl ;
        }
        s.clear( ) ;
    }
 
 
    return  0;
}
                //Link: https://codeforces.com/contest/1709/problem/C