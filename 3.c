#include <stdio.h>

int main()
{
    int i = 0, n,sum= 0;
    printf("Enter Array size:");
    scanf("%d", &n);

    int arr[n];

    do
    {
        printf("Enter %d th Value:", i + 1);
        scanf("%d", &arr[i]);
        i++;
    } while (i < n);

    for (i = 0; i < n; i++)
    {
         sum+=arr[i];
    }
    printf("Sum of all elements = %d\n", sum);

    return 0;
}
