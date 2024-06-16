//https://codeforces.com/profile/mamunur_roshid_517
        #include <bits/stdc++.h>
using namespace std;
 
#define ll long long
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define ff first
#define ss second
#define CC(x) cout << "Case " << ++x << ":";
#define LL_INF (1LL << 62)
#define INF (1 << 30)
#define SetBit(x, k) (x = (1LL << k))
#define ClearBit(x, k) (x &= ~(1LL << k))
#define CheckBit(x, k) ((x>>k)&1)
#define mod 998244353
#define N 200006
 
ll add(ll b, ll c){
    if(LL_INF-b<c) return LL_INF+1;
    return b+c;
}
ll mul(ll b, ll c){
    if(LL_INF/b<c) return LL_INF+1;
    return b*c;
}
void solve(){
    //First, confirm your idea with pen and paper.
    ll h,w,xa,ya,xb,yb,i,j; cin>>h>>w>>xa>>ya>>xb>>yb;
    ll f=1;
    if(abs(xa-xb)%2==0){
        f=2;//bob
    }
    else{
 
        f=0;//alice
    }
    if(f==0){
        ll xxa=xa,yya=ya,xxb=xb,yyb=yb;
        ll F=1;
        while(xa<=xb){
            xa++;
            if(ya<yb)ya++;
            else if(ya>yb)ya--;
            if(xa==xb&&abs(ya-yb)<1){
                F=0; break;
            }
            xb--; yb--; if(yb<1)yb=1;
        }
        f+=F;
        F=1;
 
        xa=xxa,ya=yya,xb=xxb,yb=yyb;
        while(xa<=xb){
            xa++;
            if(ya<yb)ya++;
            else if(ya>yb)ya--;
            if(xa==xb&&abs(ya-yb)<1){
                F=0; break;
            }
            xb--; yb++; if(yb>w)yb=w;
        }
        f+=F;
        F=1;
        xa=xxa,ya=yya,xb=xxb,yb=yyb;
        while(xa<=xb){
            xa++;
            if(ya<yb)ya++;
            else if(ya>yb)ya--;
            if(xa==xb&&abs(ya-yb)<1){
                F=0; break;
            }
            xb--;
        }
        f+=F;
 
        if(f==0)cout<<"Alice\n";
        else cout<<"Draw\n";
    }
    else{
        ll xxa=xa,yya=ya,xxb=xb,yyb=yb;
        ll F=1;
        while(xa<=xb){
            xb--;
            xa++;
            ya--; if(ya<1)ya=1;
            if(ya<yb)yb--;
            else if(ya>yb)yb++;
            if(xa==xb&&abs(ya-yb)<1){
                F=0; break;
            }
        }
        f-=F;
        F=1;
 
        xa=xxa,ya=yya,xb=xxb,yb=yyb;
        while(xa<=xb){
            xb--;
            xa++;
            ya++; if(ya>w)ya=w;
            if(ya<yb)yb--;
            else if(ya>yb)yb++;
            if(xa==xb&&abs(ya-yb)<1){
                F=0; break;
            }
        }
        f-=F;
        F=1;
        xa=xxa,ya=yya,xb=xxb,yb=yyb;
        while(xa<=xb){
            xb--;
            xa++;
            if(ya<yb)yb--;
            else if(ya>yb)yb++;
            if(xa==xb&&abs(ya-yb)<1){
                F=0; break;
            }
        }
        f-=F;
 
         if(f==2)cout<<"Bob\n";
        else cout<<"Draw\n";
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
                //Link: https://codeforces.com/contest/1921/problem/E