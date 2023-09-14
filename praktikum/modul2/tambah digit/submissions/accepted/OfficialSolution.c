#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    unsigned long long n;
    scanf("%llu", &n);

    int sum = 0;
    while(n>0)
    {
        sum += n % 10;
        n = n / 10;
        // printf("sum = %d\n", sum);
        // printf("n = %llu\n", n);
    }
    
    sum += n;

    int i;

    // mencetak hasil sum
    if(sum>=100 && sum<1000)
    {
        i = sum / 100;
        if(i&1) printf("apa tujuan hidupmu %d\n", i); //jika i ganjil
        else printf("setiap yang bernyawa pasti akan mati %d\n", i);
        
        sum = sum % 100;
    }
    
    if(sum>=10 && sum<100)
    {
        i = sum / 10;
        if(i&1) printf("apa tujuan hidupmu %d\n", i); //jika i ganjil
        else printf("setiap yang bernyawa pasti akan mati %d\n", i);
        
        sum = sum % 10;
    }

    
    i = sum;
    if(i&1) printf("apa tujuan hidupmu %d", i); //jika i ganjil
    else printf("setiap yang bernyawa pasti akan mati %d", i);

    

    
    
    // kalau ganji,
    // "apa tujuan hidupmu?"
    // kalau genap,
    // "semua yg bernyawa pasti akan merasakan kematian"
    // keren 3
    // keren 5
    return 0;
}