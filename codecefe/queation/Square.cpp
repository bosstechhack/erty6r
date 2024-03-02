#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main(){
    lli n;
    cin>>n;
    while(n>0){
    lli a,b,c,d,e,f,g,h;
    lli x,y;
    lli M;
    cin>>a>>b>>c>>d>>e>>f>>g>>h;
    if(a==c){
        x=d-b;
        if(x<0){
            x=x*-1;
        }    
    }
    else if(a==e){
        x=f-b;
        if(x<0){
            x=x*-1;
        }    
    }
    else if(a==g){
        x=h-b;
        if(x<0){
            x=x*-1;
        }    
    }
    if(b==d){
        y=c-a;
        if(y<0){
            y=y*-1;
        }    
    }
    else if(b==f){
        y=e-a;
        if(y<0){
            y=y*-1;
        }    
    }
    else if(b==h){
        y=g-a;
        if(y<0){
            y=y*-1;
        }    
    }
    
    cout<<x*y<<endl;
    n--;
    }
    
}