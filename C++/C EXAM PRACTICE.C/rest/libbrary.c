/*Define a structure for a book in a library, including fields such as book title, author, publication year,
 and the number of copies available. Declare an array with 5 elements using this structure. 
 Write a C program to input information for each book in the library. Allow users to check out a book by reducing the number of available copies.
  Implement a function to display the details of all books and another function to check out a book. Ensure appropriate comments in the program 
  and provide at least one valid test case*/
  #include<stdio.h>
  #include<string.h>
struct books{
 char title[100];
 char author[100];
 char year[100];
 char copies[100];

};
void match( int n,struct books b[]);
int display(int n,struct books b[]);
int print(int i,struct books b[]);
int main(){
  int n;
  printf("Enter number of different books: ");
  scanf("%d",&n);
  struct books b[n];
  for(int i=0;i<n;i++){
    printf("Enter detail of book: %d \n",i+1);
    printf("Enter the Name of title: ");
    scanf("%s",b[i].title);
    printf("Enter the Name of author: ");
    scanf("%s",b[i].author);
    printf("Enter the Name of year: ");
    scanf("%s",b[i].year);
    printf("Enter the Name of copies: ");
    scanf("%s",b[i].copies); 

  }
  display(n,b);
  match(n,b);
  
  return 0;
}
void match( int n,struct books b[]){
  char enter[100];
  scanf("%s",enter);
  for(int i=0;i<n;i++){
   if(strcmp(enter,b[i].author)==0){
    print(i,b); }
  
  if(strcmp(enter,b[i].title)==0){
    print(i,b); }
  
  if(strcmp(enter,b[i].year)==0){
    print(i,b); }
    if(strcmp(enter,b[i].copies)==0){
    print(i,b); }
  }
  return;
}
int display(int n,struct books b[]){
  for(int i=0;i<n;i++){
    printf(" detail of book: %d \n",i+1);
    printf("the Name of title:%s\n",b[i].title);
    printf("the Name of author:%s\n",b[i].author);
    printf("the Name of year:%s\n",b[i].year);
    printf("the Name of copies:%s\n",b[i].copies); 
  }
return 0;
}
int print(int i,struct books b[]){   
    printf("the Name of title:%s\n",b[i].title);
    printf("the Name of author:%s\n",b[i].author);
    printf("the Name of year:%s\n",b[i].year);
    printf("the Name of copies:%s\n",b[i].copies); 
return 0;
}

  
  