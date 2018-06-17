#include <stdio.h>

int main(int argc, char *argv[]) {

    const char FIZZ[] = "Fizz";
    const char BUZZ[] = "Buzz";
    const int FIZZ_NUMBER = 3;
    const int BUZZ_NUMBER = 5;
    int i = 1;
    int l = 100;
    char whiteflag = 0;
    char blackflag = 0;

    switch(argc) {
        case 2:
            const char ARG_PRINT = *argv[1];
            l = ARG_PRINT;
            break;  
    }

    while(i < l) {
        whiteflag = (i % FIZZ_NUMBER == 0);
        blackflag = (i % BUZZ_NUMBER == 0);
        if (whiteflag || blackflag) {
            if (blackflag) {
                printf("%s", FIZZ);
            }
            if (whiteflag) {
                printf("%s", BUZZ);
            }
        } else {
            printf("%i", i);
        }
        printf("\n");
        ++i;
    }
}
