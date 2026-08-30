#include <stdio.h>
void findFrequency(int a[], int n)
{
    int i, j, count;
    for (i = 0; i < n; i++)
    {
        count = 1;
        if (a[i] == -1)
            continue;
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                count++;
                a[j] = -1;
            }
        }
        printf("%d occurs %d times\n", a[i], count);
    }
}
int main()
{
    int a[100], n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nFrequency:\n");
    findFrequency(a, n);
    return 0;
}