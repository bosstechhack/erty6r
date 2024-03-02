//wap in c to store information of an employee(eid,age,name)
//.passing individual member of a structure
// #include<stdio.h>
// void display(struct employee e1);
// struct employee{
//     int eid;
//     int age;
//     char name[30];

//  };
// void main(){
//     struct employee e1;
//     printf("Enter your id\n");
//     scanf("%d",&e1.eid);
//     printf("Enter your age\n");
//     scanf("%d",&e1.age);
//     printf("Enter your name\n");
//     scanf("%s",e1.name);
//     display(e1.eid,e1.age,e1.name);


// }
// void display(int id ,int age, char name[30]){
//  printf("%d\n",id);
//  printf("%d\n",age);
//  printf("%s\n",name);
// }
//.passing entire structure
// #include<stdio.h>

// struct employee{
//     int eid;
//     int age;
//     char name[30];

//  };
//  void display(struct employee e1);
//  void main(){
//     struct employee e1;
    
//     printf("Enter your id\n");
//     scanf("%d",&e1.eid);
//     printf("Enter your age\n");
//     scanf("%d",&e1.age);
//     printf("Enter your name\n");
//     scanf("%s",e1.name);
//     display(e1);
    
//  }
//  void display(struct employee e1){
//  printf("Employee ID: %d\n",e1.eid);
//  printf("Age: %d\n",e1.age);
//  printf("Name: %s\n",e1.name);
// }
 

 //passing the address of struct into function
 #include<stdio.h>

struct employee{
    int eid;
    int age;
    char name[30];

 };
 void display(struct employee *ptr);
 void main(){
    struct employee e1 ,*ptr;
    ptr = &e1;
    printf("Enter your id\n");
    scanf("%d",&e1.eid);
    printf("Enter your age\n");
    scanf("%d",&e1.age);
    printf("Enter your name\n");
    scanf("%s",e1.name);
    display(ptr);
    
 }
 void display(struct employee *ptr){
 printf("Employee ID: %d\n",ptr->eid);
 printf("Age: %d\n",ptr->age);
 printf("Name: %s\n",ptr->name);
}
