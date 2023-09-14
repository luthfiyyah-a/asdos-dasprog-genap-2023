#include <stdio.h>

int main(){
	int nilai;
	printf("input: ");
	scanf("%d", &nilai);
	
	char huruf[2][6] = {"A", "AB", "B", "BC", "C", "D"};
	
	int index = (nilai>=86)*0 + (nilai>=76 && nilai<86)*1+ \
				(nilai>=66 && nilai<=75)*2 + \
				(nilai>=50 && nilai<66)*3 + \
				(nilai>=45 && nilai<=49)*4 + (nilai<=44)*5;
	
	printf("%s", huruf[index]);
	
	return 0;	
}

