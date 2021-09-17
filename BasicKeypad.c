#include <stdio.h>
#include <stdlib.h>

int main()
{
    int companynumber;
    int companynumbercode;

    companynumbercode = 606;

    int keypad;
    int keypadcode;

    keypadcode = 4757; //correct keypad code

    printf("Enter the company number code here: \n");
    scanf(" %d", &companynumbercode);

    printf("Enter keypad code here: \n");
    scanf(" %d", &keypadcode);

    if(companynumbercode == 606){
            printf("Company number is correct.");
    }else{
    printf("you do not work here.");
    }

    if(keypadcode == 4757){
        printf(" access granted");
    }else{
    printf(" access denied");
    }
}
