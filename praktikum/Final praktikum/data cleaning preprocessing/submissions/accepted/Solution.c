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

int binaryproduct(int binary1, int binary2)
{
    int i = 0, remainder = 0, sum[20];
    int binaryprod = 0;
 
    while (binary1 != 0 || binary2 != 0)
    {
        sum[i++] =(binary1 % 10 + binary2 % 10 + remainder) % 2;
        remainder =(binary1 % 10 + binary2 % 10 + remainder) / 2;
        binary1 = binary1 / 10;
        binary2 = binary2 / 10;
    }
    if (remainder != 0)
        sum[i++] = remainder;
    --i;
    while (i >= 0)
        binaryprod = binaryprod * 10 + sum[i--];
    return binaryprod;
}

long long multiply(long long binary1, long long binary2)
{
	int digit, factor = 1;
	long long multiply = 0;
	while (binary2 != 0)
    {
        digit =  binary2 % 10;
        if (digit == 1)
        {
            binary1 = binary1 * factor;
            multiply = binaryproduct(binary1, multiply);
        }
        else
            binary1 = binary1 * factor;
        binary2 = binary2 / 10;
        factor = 10;
    }
}

int main()
{
	long long x;
	long long y;
	long long resultBinary;
	scanf("%lld %lld", &x, &y);
	
    // Mengubah bilangan biner menjadi desimal
	
	char opsi[7];
	long long res_des;
	scanf("%s", opsi);
	if(strcmp(opsi,"tambah")==0)
	{
		long long x_des = binaryToDecimal(x);
    	long long y_des = binaryToDecimal(y);
		res_des = x_des + y_des;
		// Mengubah bilangan desimal menjadi biner
    	resultBinary = decimalToBinary(res_des);
	}
	else if(strcmp(opsi,"kurang")==0)
	{
		long long x_des = binaryToDecimal(x);
    	long long y_des = binaryToDecimal(y);
		res_des = x_des - y_des;
		// Mengubah bilangan desimal menjadi biner
    	resultBinary = decimalToBinary(res_des);
	}
	else if(strcmp(opsi,"kali")==0)
	{
		resultBinary = multiply(x, y);
	}
	
    
    printf("%lld\n", resultBinary);

}
