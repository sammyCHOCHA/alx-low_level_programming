#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int sum = 2772;
    char password[100];
    int rand_num;

    srand(time(NULL));

    while (sum > 122)
    {
        rand_num = rand() % 128;
        if (rand_num > 32)
        {
            password[(sum -= rand_num)] = rand_num;
        }
    }
    password[sum] = '\0';

    printf("%s", password);

    return (0);
}

