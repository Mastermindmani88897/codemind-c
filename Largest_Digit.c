#include <stdio.h>
#include <string.h>

int largest_digit(int num) {
    int digits[20];
    int length = 0;

    while (num != 0) {
        digits[length++] = num % 10;
        num /= 10;
    }

    int max = digits[0];
    for (int i = 1; i < length; i++) {
        if (digits[i] > max) {
            max = digits[i];
        }
    }

    return max;
}

int main() {
    int num;
   
    scanf("%d", &num);

    int max_digit = largest_digit(num);
    printf("%d", max_digit);

    return 0;
}