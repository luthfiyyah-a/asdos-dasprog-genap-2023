#include <stdio.h>
#include <math.h>

int main(){
	int x;
	printf("input: ");
	scanf("%d", &x);
	
	char nilai[2][6] = {"A", "AB", "B", "BC", "C", "D"};
	
	int index = (x>=86)*0 + (x>=76 && x<86)*1+ (x>=66 && x<=75)*2 + \
				(x>=50 && x<66)*3 + (x>=45 && x<=49)*4 + (x<=44)*5;
	
	printf("%s", nilai[index]);
	
	return 0;	
}

