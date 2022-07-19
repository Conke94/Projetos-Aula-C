#include <stdio.h>

int main (){
    int num, fator;

    for (num=1000; num<10000; num++){
        fator=num/100;
        fator+=num%100;
        if (fator*fator==num)
            printf ("Numero %d\n", num);
    }
    return 0;
}
