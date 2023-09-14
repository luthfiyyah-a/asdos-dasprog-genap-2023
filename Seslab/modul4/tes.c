#include <stdio.h>

int main(void)
{
    int var = 23;
    int* ptr = &var;
    int** dbPtr = &ptr;

	printf("1: %d\n", var); 
	printf("2: %d\n", &var);
	printf("3: %d\n", ptr); 
	printf("4: %d\n", &ptr);
	printf("5: %d\n", dbPtr);
	printf("6: %d\n", *dbPtr);
    printf("7: %d\n", **dbPtr);
    
    return 0;
}
