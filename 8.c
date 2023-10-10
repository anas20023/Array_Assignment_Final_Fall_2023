 #include<stdio.h>

int main()
{
    int x,i=0,k=0;
    printf("Enter Array Size:");
    scanf("%d",&x);

    int old_a[x];
    int new_a[x];

    do
    {
        printf("Enter %d th Index's Value:",i);
        scanf("%d",&old_a[i]);
        new_a[i]=old_a[i];
        i++;
    } while(i<x);

    printf("\n\nOld Array is------------\n");

    for(i=0; i<x; i++)
    {
        printf("%d\t",old_a[i]);
    }

    printf("\n\nNew Array After Coopy------------\n");

   while(k<x)
    {
        printf("%d\t",new_a[k]);
        k++;
    }


}
