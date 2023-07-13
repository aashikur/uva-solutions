#include <bits/stdc++.h>
#include <iostream>
#include <string.h>

char Language(char source[20]) {
    char str1[] = "HELLO";
    char str2[] = "HOLA";
    char str3[] = "HALLO";
    char str4[] = "BONJOUR";
    char str5[] = "CIAO";
    char str6[] = "ZDRAVSTVUJTE";

    char str10[] = "ENGLISH";
    char str20[] = "SPANISH";
    char str30[] = "GERMAN";
    char str40[] = "FRENCH";
    char str50[] = "ITALIAN";
    char str60[] = "RUSSIAN";

    char str0[] = "UNKNOWN";

    int sourceLen = strlen(source);
    int TargetLen = strlen(str1);
    int i, flg = 0;


    for(i = 0; i<=sourceLen; i++) {
        if(flg) break;

        if(source[i] != str1[i]) {
            flg = 0;
            break;
        }
        if(sourceLen == i) return printf("%s\n",str10);
    }

    for(i = 0; i<=sourceLen; i++) {
        if(flg) break;

        if(source[i] != str2[i]) {
            flg = 0;
            break;
        }
        if(sourceLen == i)   return printf("%s\n",str20);;
    }

    for(i = 0; i<=sourceLen; i++) {
        if(flg) break;

        if(source[i] != str3[i]) {
            flg = 0;
            break;
        }
        if(sourceLen == i)   return printf("%s\n",str30);;
    }

    for(i = 0; i<=sourceLen; i++) {
        if(flg) break;

        if(source[i] != str4[i]) {
            flg = 0;
            break;
        }
        if(sourceLen == i)  return printf("%s\n",str40);;
    }

    for(i = 0; i<=sourceLen; i++) {
        if(flg) break;

        if(source[i] != str5[i]) {
            flg = 0;
            break;
        }
        if(sourceLen == i)  return printf("%s\n",str50);;
    }

    for(i = 0; i<=sourceLen; i++) {
        if(flg) break;

        if(source[i] != str6[i]) {
            flg = 0;
            break;
        }
        if(sourceLen == i)    return  printf("%s\n",str60);
    }


    if(flg == 0)
        return  printf("%s\n",str0);

    return  printf("%s\n",str60);
}


int main() {

    char str[20];
    int i = 1;

    while(1) {
        scanf("%s",str);
        if(str[0] == '#' && strlen(str) == 1) break;
        printf("Case %d: ",i);
        Language(str);
        i++;
    }

    return 0;
}
