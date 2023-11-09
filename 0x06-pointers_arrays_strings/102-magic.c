#include <stdio.h>

int main(void)
{
    int n;
    int a[5];

    a[2] = 102;
    /* your code goes here */
    *(a + 2) = 98;
    /* your code goes above this line */
    for (n = 0; n < 5; n++)
    {
        printf("%d, ", a[n]);
    }
    printf("\n");

    return (0);
}

