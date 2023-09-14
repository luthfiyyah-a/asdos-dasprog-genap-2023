#include <stdio.h>
#include <math.h>

int main()
{
	//	untuk menemukan jumlah penimbangan minimum, kita dapat memakai konsep binary search
	// Kompleksitas binary seacrh sendiri ialah 2 log n. 
	// Maka, untuk mencari bungkus yg underweight pada n bungkus kentang, kita perlu penimbangan sejumlah 2 log n
	double M;
	scanf("%lf", &M);
	printf("%.0f", ceil(log2(M)));
}

