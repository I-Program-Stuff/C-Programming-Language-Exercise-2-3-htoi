#include <stdio.h>
#include <string.h>
#define ASCII_DISTANCE 55

int htoi(char[]);

int main(void){
    printf("Decimal Value: %d\n",htoi("0xFF"));
    return 0;
}

int htoi(char s[]){
    int i,inc,res,v;
	res = 0;
    for(i=strlen(s)-1,inc=1;(s[i] >= '0' && s[i] <= '9') || (s[i] >= 'A' && s[i] <= 'F');i--,inc*=16){
        if(s[i] >= '0' && s[i] <= '9'){
            v = (s[i] - '0') * inc;
			res += v;
        }else{
			char currentChar = s[i];
			v = (currentChar - ASCII_DISTANCE) * inc;
			res += v;
		}
    }
    return res;
}
