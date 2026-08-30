#include <stdio.h>
#define MAX 10
int hash(int key)
{
    return key % TMP_MAX;
}
void insert(int table[], int key)
{
    int index, i;
    index = hash(key);

    for (i = 0; i < MAX; i++)
    {
        int newIndex = (index + i * i) % MAX;

        if (table[newIndex] == -1)
   {
            table[newIndex] = key;
        return;
 }
}
}
void display(int table[])
{
    int i;
    for (i = 0; i < MAX; i++)
        printf("%d : %d\n", i, table[i]);
}
int main()
{
    int table[MAX], n, key, i;
    for (i = 0; i < MAX; i++)
        table[i] = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &key);
        insert(table, key);
    }
    printf("Hash Table:\n");
    display(table);
    return 0;
}