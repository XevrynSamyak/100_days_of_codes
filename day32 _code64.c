Q64 (Arrays (1D))📋
Find the digit that occurs the most times in an integer number.
Show Sample Test Cases
**Input 1:**
112233
**Output 1:**
1
**Input 2:**
887799
**Output 2:**
7 in c without strings


  #include <stdio.h>

int main() {
    int n, digit;
    int count[10] = {0};

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;
        count[digit]++;
        n = n / 10;
    }

    int max = 0;
    int result = 0;

    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
            result = i;
        }
    }

    printf("%d\n", result);

    return 0;
}
