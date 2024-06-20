#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000000

int main()
{
    int data[SIZE];

    srand(time(NULL));
    for (int i = 0; i < SIZE; i++)
    {
        data[i] = rand() % 100; // 0から99まで乱数
    }

    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += data[i];
    }
    float ave = sum / (float)SIZE; // 平均
    printf("平均値: %.2f\n", ave);

    return 0;
}
