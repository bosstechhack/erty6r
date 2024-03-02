#include<stdio.h>
#include<stdbool.h>


// int arry[10] = {1, 2, 3, 4, 5,6,7, 8, 9};
int arry[10];


void insert(int, int[]);
int delete(int[]);
bool isFull(int[]);
bool isEmpty(int[]);

int main()
{
    int s;
    scanf("%d",&s);

    for(int i=0;i<s;i++){
    scanf("%d",&arry[i]);
}
    printf("Empty : ");
    isEmpty(arry);
    printf("\nFull : ");
    isFull(arry);
    printf("\n");

    printf("\n");
    insert(10, arry);
    printf("\n");

    printf("Empty : ");
    isEmpty(arry);
    printf("\nFull : ");
    isFull(arry);
    printf("\n");

    printf("\n");
    delete(arry);
    printf("\n");
    

    printf("Empty : ");
    isEmpty(arry);
    printf("\nFull : ");
    isFull(arry);
    printf("\n");

    return 0;
}

void insert(int value, int arr[])
{
    for(int i = 0; i<10; i++)
    {
        if( arr[i] == 0)
        {
           arr[i] =  value;
           break;
        }
    }
}

int delete(int arr[])
{
    int del = arr[0];
    for(int i = 0; i<9; i++)
    {
        arr[i] = arr[i+1];
    }
    arr[9] = 0;
    return del;
}

bool isFull(int arr[])
{
    if (arr[9] == 0)
        printf("False");
    else
        printf("True");
}

bool isEmpty(int arr[])
{
    if (arr[9] == 0)
        printf("True");
    else
        printf("False");
    return 0;
}