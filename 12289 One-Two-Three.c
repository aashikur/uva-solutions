#include <iostream>
#include <string.h>

int ValidateNumber(char str[10]) {
    int len = strlen(str);
    int num;

    if(len==5) {
        num = 3;
    } else {
        if((str[0] == 'o' && str[1] == 'n') ||(str[0] == 'o' && str[2] == 'e')|| (str[1] == 'n' && str[2] == 'e')||(str[0] == 'o' && str[1] == 'n')) {
            num = 1;
        } else {
            num = 2;
        }
    }
    return num;

}

int main() {

    int test;
    char str[10];
    scanf("%d ",&test);

    while(test--) {
        scanf("%s",str);

        int num = ValidateNumber(str);

        printf("%d\n",num);
    }


    return 0;
}
