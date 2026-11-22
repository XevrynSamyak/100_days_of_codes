// Q139: Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Result { SUCCESS, FAILURE, TIMEOUT };

int main(void)
{
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);
    return 0;
}
