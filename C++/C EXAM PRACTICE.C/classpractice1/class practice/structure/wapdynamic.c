#include<stdio.h>
#include<stdlib.h>
struct course{
    int marks;
    char subject[30];

};
int main(){
    struct course *ptr;
    int noofRecords;
    printf("Enter the number of records: ");
    scanf("%d",&noofRecords);
    ptr =(struct course *)malloc(noofRecords* sizeof(struct course));
     for (int i = 0; i < noofRecords; ++i) {
    printf("Enter subject and marks:\n");
    scanf("%s %d", (ptr + i)->subject, &(ptr + i)->marks);
  }

  printf("Displaying Information:\n");
  for (int i = 0; i < noofRecords; ++i) {
    printf("%s\t%d\n", (ptr + i)->subject, (ptr + i)->marks);
  }

  //free(ptr);

  return 0;

}