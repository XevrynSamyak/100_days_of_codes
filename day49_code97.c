Q97 (Strings)
📋
Print the initials of a name.


  #include <stdio.h>

int main() {
    char name[100];
    int i;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    printf("Initials: ");

    // Print the first character
    if (name[0] != ' ' && name[0] != '\n') {
        printf("%c", name[0]);
    }

    // Print character after every space
    for (i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != '\n') {
            printf("%c", name[i]);
        }
    }

    return 0;
}
