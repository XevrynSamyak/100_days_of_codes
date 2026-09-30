Q94 (Strings)
📋
Find the longest word in a sentence.

  #include <stdio.h>

int main() {
    char str[200];
    char longest[100];
    int i = 0, j = 0;
    int maxLength = 0, length = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {

        if (str[i] != ' ' && str[i] != '\n') {
            length++;
        } 
        else {
            if (length > maxLength) {
                maxLength = length;

                for (j = 0; j < length; j++) {
                    longest[j] = str[i - length + j];
                }

                longest[length] = '\0';
            }

            length = 0;
        }

        i++;
    }

    if (length > maxLength) {
        maxLength = length;

        for (j = 0; j < length; j++) {
            longest[j] = str[i - length + j];
        }

        longest[length] = '\0';
    }

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLength);

    return 0;
}
