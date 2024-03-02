//find and print addres element of array 
//whose sum equal to tageng given

#include<stdio.h>
int main(){
int n,i,j,t;
scanf("%d",&n);
scanf("%d",&t);

int nums[n];
for(i=0;i<n;i++){
  scanf("%d",&nums[i]);

}
for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){
    if(nums[i]+nums[j]==t){
      printf("%d%d",i,j);
      break;
    }
  }
}
return 0;
}