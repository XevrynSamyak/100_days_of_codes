Q96 (Strings)
📋
Reverse each word in a sentence without changing the word order.

  #include <stdio.h>

int main() {
    char str[200];
    int start = 0, i, j;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {

        if (str[i] == ' ' || str[i] == '\n') {

            for (j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }

            if (str[i] == ' ')
                printf(" ");

            start = i + 1;
        }
    }

    return 0;
}
