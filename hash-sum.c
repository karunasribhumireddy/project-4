 #include <stdio.h>
int search(int hash[], int value)
{
    if (value >= 0 && value < 100)
        return hash[value];
    return 0;
}
void findPair(int a[], int n, int target)
{
    int hash[100] = {0};
    int i, required;
    for (i = 0; i < n; i++)
    {
        required = target - a[i];
        if (required >= 0 && required < 100)
        {
            if (search(hash, required))
            {
                printf("Pair found: %d + %d = %d\n",
                       required, a[i], target);
                return;
            }
        }
        if (a[i] >= 0 && a[i] < 100)
            hash[a[i]] = 1;
    }
    printf("No pair found\n");
}
int main()
{
    int a[100], n, target, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Enter target value: ");
    scanf("%d", &target);
    findPair(a, n, target);
    return 0;
}