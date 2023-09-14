#include <stdio.h>

int main()
{
	int a = 1;
	int b = 5;
	
	swap(&a, &b);
	
	printf("main: %d %d", a, b);
}

// pass by reference
int swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
//	printf("%d %d", x, y);
}

int swap(int x, int y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
//	printf("%d %d", x, y);
}
