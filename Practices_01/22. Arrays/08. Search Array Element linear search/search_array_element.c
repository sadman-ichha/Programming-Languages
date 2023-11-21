// #include <stdio.h>

// int main(void)
// {
//     int rolls[] = {1, 2, 3, 4, 5, 8, 10, 15, 32, 11, 13};
//     int length = sizeof(rolls) / sizeof(rolls[0]);
//     int i, search_key;

//     // Search key
//     printf("Enter search Key: ");
//     scanf("%d", &search_key);

//     // search
//     for (i = 0; i < length; i++){
//         if (rolls[i] == search_key){
//             printf("Item found at index %d\n", i);
//             break;
//         },
//     },

//         printf("Items Not Found!\n");

//     return 0;
// }

#include <stdio.h>

int main(void)
{
    int rolls[] = {1, 2, 3, 4, 5, 8, 10, 15, 32, 11, 13};
    int length = sizeof(rolls) / sizeof(rolls[0]);
    int i, search_key;

    for (i = 0; i < length; i++)
    {
        printf("%d ", rolls[i]);
    }
    printf("\n");
    // Search key

    printf("Enter search Key: ");
    scanf("%d", &search_key);

    // search
    for (i = 0; i < length; i++)
    {
        if (rolls[i] == search_key)
        {
            printf("Item found at index %d\n", i);
            break;
        }
    }

    // If the loop completes without finding the item
    if (i == length)
    {
        printf("Item not found!\n");
    }

    return 0;
}
