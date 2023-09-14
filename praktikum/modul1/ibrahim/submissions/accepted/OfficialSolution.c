#include <stdio.h>

int main()
{
	int t;
	int m, n, a, b, c;
	
	scanf("%d", &t);
	while(t--){
		scanf("%d %d %d %d %d", &m, &n, &a, &b, &c);
	
		if( (m>a && n>b) || (m>b && n>a) || (m>b && n>c) || (m>c && n>b) || (m>c && n>a) || (m>a && n>c) ) 
		{
			printf("yay\n");
		}
		else{
			printf("nay\n");
		}	
	}
	return 0;
}
