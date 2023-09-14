#include <stdio.h>
#include <string.h>

int main () {
  
	char a[] = "halo";
	char b[10];
	
	strcpy(b, a);
	printf("%s", b);
  return 0;

}
