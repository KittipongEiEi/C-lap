#include <stdio.h>

int main() {
    int num1, num2;  

    
    scanf("%d", &num1);  
    scanf("%d", &num2);  

    if (num1 > num2) {
        printf("num 1 is greater than num 2\n");
    }
    if (num2 > num1) {
        printf("num 2 is greater than num 1\n");
    }

    return 0;
}

