// #include <stdio.h>
// union unionJob
// {
//    //defining a union
//    char name[32];
//    float salary;
//    int workerNo;
// } uJob;
// struct structJob
// {
//    char name[32];
//    float salary;
//    int workerNo;
// } sJob;
// int main()
// {
//    printf("size of union = %d bytes", sizeof(uJob));
//    printf("\nsize of structure = %d bytes", sizeof(sJob));
//    return 0;
// }
#include <stdio.h>
union Job {
   float salary;
   int workerNo;
} j;
int main() {
   j.salary = 12.3;
   // when j.workerNo is assigned a value,
   // j.salary will no longer hold 12.3
   j.workerNo = 100;
   printf("Salary = %.1f\n", j.salary);
   printf("Number of workers = %d", j.workerNo);
   return 0;
}

