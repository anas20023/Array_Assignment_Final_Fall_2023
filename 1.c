#include <stdio.h>
int main()
{
    int size,i=0;
    printf("Enter Array Size:");
    scanf("%d",&size);

    int array[size];
    do
    {
        printf("Enter %d th Value:",i+1);
        scanf("%d",&array[i]);
        i++;


    }
    while(i<size);

    printf("Output\n");
    for(int i=0; i<size; i++)
    {


        printf("%d\t",array[i]);
    }
    return 0;
}
