#include <stdio.h>
int InvCount(int arr[], int n)
{
    int c = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                c++;
    return c;
}
int main()
{
    int arr[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d",InvCount(arr, n));
    return 0;
}
