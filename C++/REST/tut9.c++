#include<iostream>
using namespace std;
int main(){
   int n;
  

   cout<<"Enter thr number for summation"<<endl;
   cin>>n;
    int t=n;
   int sum=0;
   while(n>0){
    sum=sum+n;
    n--;
   }
   int p=1;
   for(int i=1;i<=t;i++){
   p=p*i;
   }

   cout<<"sum of fird=st n natural number is: "<<sum<<endl;
   cout<<"multipplecation of first n natural number is: "<<p<<endl;

    return 0;
}