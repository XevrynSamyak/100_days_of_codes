// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>
#include <string.h>

enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main(void)
{
    char input[32];
    enum Status status;

    printf("Enter the operation status: ");
    scanf("%31s", input);

    if (strcmp(input, "SUCCESS") == 0)
        status = SUCCESS;
    else if (strcmp(input, "FAILURE") == 0)
        status = FAILURE;
    else
        status = TIMEOUT;

    switch (status) {
    case SUCCESS:
        printf("Operation succeeded\n");
        break;
    case FAILURE:
        printf("Operation failed\n");
        break;
    case TIMEOUT:
        printf("Operation time out\n");
        break;
    }

    return 0;
}
