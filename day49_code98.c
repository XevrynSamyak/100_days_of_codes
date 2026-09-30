Q98 (Strings)
📋
Print initials of a name with the surname displayed in full.


  #include <stdio.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    // Find the position of the last space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    printf("Formatted name: ");

    // Print initials of first and middle names
    for (i = 0; i < lastSpace; i++) {
        if (i == 0 || name[i - 1] == ' ') {
            printf("%c. ", name[i]);
        }
    }

    // Print surname in full
    for (i = lastSpace + 1; name[i] != '\0' && name[i] != '\n'; i++) {
        printf("%c", name[i]);
    }

    printf("\n");

    return 0;
}
