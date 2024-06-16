//https://codeforces.com/profile/mamunur_roshid_517
        #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define mod 1000000007
void solve(){
    string aa; ll n,i,pos; cin>>aa>>pos;
    n=aa.size();
    ll cn=0;
    while(pos>n){
        pos-=n;
        cn++;
        n--;
    }
//    char mn='z';
//
//    for(auto ii:aa)mn=min(mn,ii);
//    ll pre=0;
//    n=aa.size();
//    string bb=aa;
//    for(i=0;i<n;i++){
//        if(aa[i]==mn&&mn!=pre){
//            sort(aa.begin()+pre,aa.begin()+i);
//            reverse(aa.begin()+pre,aa.begin()+i);
//            pre=i+1;
//        }
//    }
//    if(pre!=n){
//        sort(aa.begin()+pre,aa.begin()+n);
//        reverse(aa.begin()+pre,aa.begin()+n);
//    }
//    multiset<char>st;
//    for(i=0;i<n;i++){
//        if(cn&&aa[i]!=mn){
//            st.insert(aa[i]);
//            cn--;
//        }
//    }
    string cc="";
    n=aa.size();
    stack<char>st;
    for(i=0;i<n;i++){
        if(st.size()==0)st.push(aa[i]);
        else if(cn&&st.top()>aa[i]){
            cn--; st.pop();
            i--;
        }
        else st.push(aa[i]);
    }
    while(st.size()){
        cc.push_back(st.top());
        st.pop();
    }
    reverse(cc.begin(),cc.end());
    cout<<cc[pos-1];
 
}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t=1;
    cin>>t;
    for(ll it=1;it<=t;it++){
        //cout<<"Case "<<it<<": "; //cout<<'\n';
        solve();
    }
    return 0;
}
                //Link: https://codeforces.com/contest/1886/problem/C