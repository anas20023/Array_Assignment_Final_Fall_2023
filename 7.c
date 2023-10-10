#include<stdio.h>

int main()
{
    int i=0,n,count=0;
    printf("Enter Array Size:");
    scanf("%d",&n);

    int arr[n];

    while(i<n)
    {
        printf("Enter %d th Index's value:",i);
        scanf("%d",&arr[i]);
        i++;
    }
    for(i=0; i<n; i++)
    {
        (arr[i] <0) ? count++ : count;
    }

    printf("Total Negative Number %d\n",count);

    return 0;
}
