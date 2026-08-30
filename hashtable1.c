 #include <stdio.h>
#define MAX 10
int hash(int key)
{
return key % MAX;
}
void insert(int table[], int key)
{
 int index = hash(key);
 while (table[index] != -1)
    {
        index = (index + 1) % MAX;
    }

 table[index] = key;
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