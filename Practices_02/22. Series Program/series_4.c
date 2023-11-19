#include <stdio.h>
// 1-2+3-4+5-6+.......N
int main()
{
    int num, i, result = 0, even = 0, odd = 0;
    printf("Enter last number : ");
    scanf("%d", &num);
    printf("1-2+3-4+5-6+.......%d", num);

    for (i = 1; i <= num; i++)
    {
        if (i % 2 == 0)
        {
            even = even + i;
        }
        else
        {
            odd = odd + i;
        }
    }
    int finalResult = even - odd;
    printf(" Sum = %d", finalResult);

    return 0;
}
