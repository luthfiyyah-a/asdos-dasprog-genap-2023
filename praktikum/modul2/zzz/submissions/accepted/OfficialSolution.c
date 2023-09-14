#include <stdio.h>

int main()
{
    int tinggi, i, j;
    scanf("%d", &tinggi);

    if(tinggi==1)
    {
        printf("z");
        return 0;
    }
    // cetak bagian atas
    for(i=1; i<=tinggi; i++)
    {
        printf("z");
    }
    printf("\n");
    for(i=2; i<=tinggi-1; i++)
    {
        for(j=1; j<=tinggi; j++)
        {
            if(j==tinggi-i+1)
            {
                printf("z");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    // cetak bagian bawah
    for(i=1; i<=tinggi; i++)
    {
        printf("z");
    }
    
    return 0;
}

// zzzzz
// ---z-
// --z--
// -z---
// zzzzz

// zzzz
// --z-
// -z--
// zzzz