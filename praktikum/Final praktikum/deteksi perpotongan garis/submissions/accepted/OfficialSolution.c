#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void replace(char*, const char*, const char*);

void replace(char *str, const char *search, const char *replace)
{
	char *pos = strstr(str, search);
    if (pos != NULL) {
        int searchLen = strlen(search);
        int replaceLen = strlen(replace);
        int tailLen = strlen(pos + searchLen);

        if (replaceLen != searchLen) {
            memmove(pos + replaceLen, pos + searchLen, tailLen + 1);
        }
        memcpy(pos, replace, replaceLen);
    }
}

float cleaning(char* value) {
	replace(value, " Juta", "");
	replace(value, "Rp. ", ""); 
	replace(value, ",", "");
	replace(value, ".", "");
	replace(value, ".", "");
	replace(value, ".", "");
	double value_float = strtod(value, NULL);
	value_float = value_float / 100;
	if(value_float > 5000)
	{
		value_float = value_float / 1000000;
	}
	
	return value_float;
}

int main()
{   
	int N;
	scanf("%d ", &N);
	
	int i;
	char data[26];
	for(i=0; i<N; i++)
	{
		fgets(data, sizeof(data), stdin);
		printf("%g\n", cleaning(data));
	}

}
