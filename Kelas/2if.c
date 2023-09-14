#include <stdio.h>
#include <math.h>

int main(){
	int x;
	printf("input: ");
	scanf("%d", &x);
	
	int y = (x>=86)*1 + (x>=76 && x<86)*5 + (x>=66 && x<=75)*2 + (x>=50 && x<66)*10 + (x>=45 && x<=49)*3 + (x<=44)*4;
//	banyak ngakalin doang. kali 5, kali 10 itu ngawur. biar ga masuk ke if aja

	if(y<5){
		printf("%c", y+64);	
	}
	else{
		y = y/2;
		printf("%c%c", y+63, y+64);
	}
}

