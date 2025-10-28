#include <stdio.h>

long int str2int (const char * str);

int main(){



return 0;
}

long int str2int (const char * str){
    long int n = 0;
    int i = 0, s=1;
    while(str[i] == ' ') i++;
    while (str[i] == '-' && str[i] == '+'){
        if (str[i] == '-') s*=-1;
    }

    while (str[i] >= '0' && str[i] <= '9'){
        n = n*10;
        n = n+str[i]-'0' // Ex: '7' - '0' = 7
        i++;
    }
    return n*s;
}