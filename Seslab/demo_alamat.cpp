//#include <stdio.h>
//
//int main()
//{
//	int mhs1 = 1;
//	int mhs2 = 2;
//	int mhs3 = 5;
//	printf("alamat variabel:\n\n");
//	printf("%p\n", &mhs1);
//	printf("%p\n", &mhs2);
//	printf("%p\n", &mhs3);
//	
//	printf("\n\n\n");
//	
//	int mhs[3] = {1, 2, 5};
//	
//	printf("alamat array:\n\n");
//	printf("%p\n", &mhs[0]);
//	printf("%p\n", &mhs[1]);
//	printf("%p\n", &mhs[2]);
//	
//	
//	printf("\n");
//	char kata[] = "Dasar";
//	printf("%d", kata[5]);
//}

#include <stdio.h>
#include <string.h>

int main () {
  
	char a[] = "halo";
	char b[10];
	
	strcpy(b, a);
	printf("%s", b);
  return 0;

}
