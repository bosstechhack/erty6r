#include<bits/stdc++.h>
using namespace std;
bool isVowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return true;
    } else {
        return false;
    }
}


int main(){
    int n,b;
    cin>>n;
    while(n!=0){
    cin>>b;
    
    string str;
    cin>>str;
    int i=0;
    while(i<str.length()){
       
        if(i+1<str.length() && !isVowel(str[i]) && !isVowel(str[i+1])){
            cout<<str[i]<<".";
            i+=1;
        }
         if(i+2<str.length() && isVowel(str[i])  && isVowel(str[i+2])){
            
            cout<<str[i]<<".";
            
            i+=1;
        }
        
        
      
        else{
            cout<<str[i];
            i++;
        } 


    }
    cout<<endl;
    n--;
    }
    return 0;

}