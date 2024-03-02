#include<stdio.h>
int main(){
    int a=1025;
    int *p=&a;
    // printf("size of interger is %d bytes\n",sizeof(int) );
    // printf(" addresss = %d, value =  %d\n",p,*p);
    // // printf("Address =%d,value =%d\n",p+1,*(p+1));
    // // char *p0;
    // // p0 = (char*)p; //typecasting
    // // printf("size of interger is %d bytes\n",sizeof(char) );
    // // printf("%d %d\n",p0,*p0);
    // //void pointer - genreic pointer
    // void *p0;
    // p0 =p;
    // printf("adderess = %d",p0);
 int **q;
  q=&p;
  int ***r;
  r=&q;
  printf("%d\n",p);
   printf("%d\n",&p);
   printf("%d\n",*p);
   printf("   \n");
    printf("%d\n",q);
     printf("%d\n",&q);
      printf("%d\n",*q);
      printf("%d\n",**q);

      printf("   \n");

      printf("%d\n",r);
      printf("%d\n",&r);
      printf("%d\n",*r);
      printf("%d\n",**r);
      printf("%d\n",***r);



    

    
    
    
    
    return 0;
}