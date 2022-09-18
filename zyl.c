#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int max = 1000000;
    int a[max];
    clock_t start, finish;
    double Total_time;
    for(int i = 0; i < max;i++)
    {
        a[i] = 1;
    }
    int n = 10;
    while(n <= max)
    {
        printf("以下程序规模大小为%d\n", n);
        start = clock();
        for(int i = 0; i < n;i++)
        {
            a[i] = a[i] * 2000;
            a[i] = a[i] / 10000;
        }
        finish = clock();
        Total_time = (double)(finish - start) / CLOCKS_PER_SEC;
        printf("第一个程序共执行了%f seconds\n", Total_time);
        int* b;
        b = a;
        start = clock();
        for(int i = 0; i < n;i++)
        {
            *b = *b * 2000;
            *b = *b / 10000;
            b++;
        }
        finish = clock();
        Total_time = (double)(finish - start) / CLOCKS_PER_SEC;
        printf("第二个程序共执行了%f seconds\n", Total_time);
        if(n < 100) n += 10;
        else if(n < 1000) n += 100;
        else n *= 10;
    }
}
