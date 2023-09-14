#include <stdio.h>

// Fungsi untuk mengubah bilangan biner menjadi desimal
long long binaryToDecimal(long long binaryNum) {
    long long decimalNum = 0;
    long long base = 1;

    while (binaryNum > 0) {
        long long lastDigit = binaryNum % 10;
        binaryNum /= 10;
        decimalNum += lastDigit * base;
        base *= 2;
    }

    return decimalNum;
}

// Fungsi untuk mengubah bilangan desimal menjadi biner
long long decimalToBinary(long long decimalNum) {
    long long binaryNum = 0;
    long long remainder, i = 1;

    while (decimalNum != 0) {
        remainder = decimalNum % 2;
        decimalNum /= 2;
        binaryNum += remainder * i;
        i *= 10;
    }

    return binaryNum;
}

long long main() {

	long long x;
	long long y;
	scanf("%lld %lld", &x, &y);
	
    // Mengubah bilangan biner menjadi desimal
    long long x_des = binaryToDecimal(x);
    long long y_des = binaryToDecimal(y);
	
	char opsi[7];
	long long res_des;
	scanf("%s", opsi);
	if(strcmp(opsi,"tambah")==0)
	{
		res_des = x_des + y_des;
	}
	else if(strcmp(opsi,"kurang")==0)
	{
		res_des = x_des - y_des;
	}
	else if(strcmp(opsi,"kali")==0)
	{
		res_des = x_des * y_des;
	}
	
    // Mengubah bilangan desimal menjadi biner
    long long resultBinary = decimalToBinary(res_des);
    printf("%lld\n", resultBinary);

    return 0;
}

