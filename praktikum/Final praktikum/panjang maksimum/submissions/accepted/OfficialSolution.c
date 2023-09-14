#include <stdio.h>


int n, k;
int data1[10010], mid, atas, bawah, sum, MX;

// code reference to Bapak Rully Sulaiman
long long calc(long long u) // fungsi biaya
{
	long long temp = 0;
	int i;
	for (i = 0; i<n; i++) temp += (data1[i]/u);
	return temp;
}

int min(int a, int b){
	if(a <b) return a;
	else return b;
}

int main()
{
	scanf("%d%d", &n, &k);
	sum = 0;
	MX = 0; //panjang maksimum segment
	int i;
	for(i=0; i<n; i++)
	{
		// cin >> data1[i];
		scanf("%d", &data1[i]);
		if (MX < data1[i]) MX = data1[i];
		sum += data1[i];
	}
	if(sum<k) printf("0");
	else if (sum == k) printf("1");
	else
	{
		atas = min(MX+1, sum/k+1);
		bawah = 1;
		while (1)
		{
			if (atas-1 == bawah) break;
			mid = (atas+bawah)/2;
			if (calc(mid)<k)
			{
				atas=mid;
			}
			else
			{
				bawah = mid;
			}
		}
		printf("%d", bawah);
	}
	printf("\n");
	return 0;
}
