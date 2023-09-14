#include <stdio.h>
#include <string.h>

typedef struct Buah
{
	char nama[21];
	int harga;
} Buah;


int main()
{
	int N, X;
	int i, j;
	Buah buah[21];

	scanf("%d", &N);
	for(i=0; i<N; i++){
		scanf("%s %d", buah[i].nama, &buah[i].harga);
	}

	scanf("%d", &X);
	int jumlah;
	char nama[21];
	int total = 0;
	for(i=0; i<X; i++)
	{
		scanf("%d %s", &jumlah, &nama);
		for(j=0; j<N; j++)
		{
			if(strcmp(nama, buah[j].nama)==0)
			{
				total += buah[j].harga * jumlah;
			}
		}
	}

	printf("%d", total);
	return 0;
}