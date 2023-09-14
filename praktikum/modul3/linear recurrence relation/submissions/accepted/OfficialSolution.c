#include <stdio.h>

int a(int n, int k)
{
    if(n==1)
        return 0;
    else if(n==2)
        return k*(k-1);
    else
        return (k-2)*a(n-1, k) + (k-1)*a(n-2, k);
}

int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", a(n, k));

    return 0;
}