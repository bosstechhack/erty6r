// #include<stdio.h>


// struct DOA{
//     int day;
//     char month[20];
//     int year;
// };
// struct DOB{
//     int day1;
//     char month1[20];
//     int year1;

// };
// struct student {
//     char name[30];
//     int roll;
//     struct DOA d ;
//     struct DOB db;

// };
// void display( int n,struct student s[]){
//      for(int i=0;i<n;i++){
//     float y=s[i].d.year-s[i].db.year1;
//     float m=s[i].d.month-s[i].db.month1;
//     float d=s[i].db.year1-s[i].db.day1;
//     float y1=m/12;
    
//     printf("age %g\n",y+y1);

    
//     }
    
// }
// int main(){
//     int n;
//     scanf("%d",&n);
// printf("Enter the number of student\n");
//     struct student s[n];
//     for(int i=0;i<n;i++){
//     printf("NAMe: ");
//     scanf("%s",s[i].name);
//     printf("ROll: ");
//     scanf("%d",&s[i].roll);
//     printf("Enter the date of admission: \n");
//     scanf("%d %s %d",&s[i].d.day,s[i].d.month,&s[i].d.year);
//     printf("Enter the date of birth:\n");
//     scanf("%d %s %d",&s[i].db.day1,s[i].db.month1,&s[i].db.year1);

//     }
//     for(int i=0;i<n;i++){
//     printf("Name: %s\n",s[i].name);
//     printf("ROll:%d\n",s[i].roll);
//     printf("DOA:%d-%s-%d\n",s[i].d.day,s[i].d.month,s[i].d.year);
//     printf("DOB:%d-%s-%d\n",s[i].db.day1,s[i].db.month1,s[i].db.year1);
//     printf("\n");
//     }
//     display(n,s);
   
//     return 0;
// }

// #include <stdio.h>  
// void main(int x, char *y[] )  {  
//      printf("Program name is: %s\n", y[0]);  
//       if(x < 2){  
//       printf("No argument passed through command line.\n");  
//    }  
//    else{  
//       printf("First argument is: %s\n", y[1]);  
//    }  
// } 


#include<stdio.h>
int main(){
    int arr[]={1,2,3,4};
    int brr[]={{1},{2},{3},{4}};
    for(int i=0;i<4;i++){
        printf("%d\n",brr[i]);
    }
    return 0;
}