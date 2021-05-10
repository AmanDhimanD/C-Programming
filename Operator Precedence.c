#include <stdio.h>

int main() {
    int a = 6;
    int b = 4;
    int c = 2;
    int result;
    result = a - b + c;  // 4
    printf("%d \n", result);
    result = a + b / c;  // 8
    printf("%d \n", result);
    result = (a + b) / c;  // 5
    printf("%d \n", result);

    result = ((a * b) * c)*(a+b); 
    printf("%d \n", result);

    return 0;
}