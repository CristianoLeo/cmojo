#include <stdio.h>  
#include <math.h>
int main() {
    char hex[10];
    int decimal = 0, val, i;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    for(i = 0; hex[i] != '\0'; i++) {
        if(hex[i] >= '0' && hex[i] <= '9') {
            val = hex[i] - 48;
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f') {
            val = hex[i] - 97 + 10;
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F') {
            val = hex[i] - 65 + 10;
        }
        decimal += val * pow(16, strlen(hex) - i - 1);
    }

    printf("The decimal equivalent is: %d\n", decimal);

    return 0;
}