#include <stdio.h>

int main()
{
    int i, n, f;
    //n = 10;
    scanf("%d", &n);
    i = 2;
    f = 1;
    while(i <= n)
    {
        f = f * i;
        i = i + 1;
    }
    //cout << f << endl;
    printf("%d\n", f);
}

