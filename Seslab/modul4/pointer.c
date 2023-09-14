#include <stdio.h>

int main()
{
//	int var = 5;
//	printf("%d\n", var);
//	printf("%p\n", &var);
	
//	// deklarasi variabel biasa
//	int x;
//	
//	// Pointer----------
//	
//	// deklarasi variabel pointer
//	int* ptr;
//
////	// inisiasi variabel pointer
////	int var = 55;
////	int* ptr1 = &var;
////	
//	// assignment
//	int var, *ptr;
//	var = 55;
//	ptr = &var; // Assignment pada variabel pointer menggunakan alamat dari var


	int var  = 55;
	int* ptr = &var;
	
	printf("alamat var: %p\n", &var);
	
	printf("%p\n", ptr);
	printf("%d", *ptr);
//	
//	printf("%d\n", *ptr);
//	*ptr = 20;
//	
//	printf("%d\n", *ptr);
//	printf("%d\n", var);
}
