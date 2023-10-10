#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of Array:");
    scanf("%d",&n);
    int arr[n];

    for(int i=0; i<n; i++)
    {
        printf("Enter %d th Value:",i+1);
        scanf("%d",&arr[i]);
    }

    printf("----All Negative Values----\n");

    int i=0;

    do
    {
        if(arr[i] <0)
        {
            printf("%d\t",arr[i]);
        }
        i++;

    }
    while(i<n);

    return 0;
}
