#include<stdio.h>

int main()
{
    int i=0,n,max,max_2;

    printf("Enter Array Size:");
    scanf("%d",&n);

    int array[n];

   do
    {
        printf("Enter %d th Index's Value:",i+1);
        scanf("%d",&array[i]);
        i++;
    }while(i<n);

    max=array[0];
    max=array[1];

    for(i=0 ; i<n ; i++)
    {
        if(array[i] > max)
        {
            max_2=max;
            max=array[i];
        }
        else if(array[i] > max_2 && array[i] <max)
        {
            max_2=array[i];
        }
    }

    printf("Max value is: %d\n",max);
    printf("Second Max. value is: %d",max_2);



    return 0;
}
