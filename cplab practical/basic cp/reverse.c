#include <stdio.h>

int main()
{
    int n,count;
    count=0;
    printf("Enter the number of elements in the array:- ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element:- ",i+1);
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if ((!(arr[i]%2)==0))
        {
            count++;
        }
    }
    printf("There are %d odd number is the entered array  ",count);
    
    return 0;
}