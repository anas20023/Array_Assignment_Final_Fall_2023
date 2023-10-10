#include<stdio.h>

int main()
{
    int i=0,n,count_even=0,count_odd=0;
    printf("Enter Array size:");
    scanf("%d",&n);

    int arr[n];

    do
    {
        printf("Enter %d th Value:",i+1);
        scanf("%d",&arr[i]);
        i++;
    }
    while(i<n);


    for(i=0 ; i<n ; i++)
    {
        if(arr[i] % 2 ==0 )
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }

    printf("Total Even Numbers in The Array: %d\n",count_even);
    printf("Total Odd Numbers in The Array: %d\n\n",count_odd);

    return 0;
}
