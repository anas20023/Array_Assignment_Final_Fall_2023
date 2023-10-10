#include<stdio.h>

int main()
{
    int i=0,x;

    printf("Enter Array Size:");
    scanf("%d",&x);

    int arr[x];
    while(i<x)
    {
        printf("Enter %d th Index's Value:",i+1);
        scanf("%d",&arr[i]);
        i++;
    }
    int max=arr[0];
    int min=arr[0];

    for(i=0; i<x; i++)
    {
        (arr[i] > max) ? max=arr[i] : max;
        (arr[i] < min) ? min=arr[i] : min;
    }
    printf("Maximum Number is: %d\n",max);
    printf("Minimum Number is: %d\n",min);

   return 0;
}
