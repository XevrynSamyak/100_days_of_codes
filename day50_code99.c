Q99 (Strings)
📋
Change the date format from dd/04/yyyy to dd-Apr-yyyy.



  #include <stdio.h>

int main() {
    char date[20];
    int day, month, year;

    printf("Enter date (dd/04/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    if (month == 4) {
        printf("New date format: %02d-Apr-%d\n", day, year);
    } else {
        printf("Invalid date format.\n");
    }

    return 0;
}
