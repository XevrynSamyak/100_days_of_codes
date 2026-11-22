// Q147: Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    char name[32];
    int id;
    float salary;
};

int main(void)
{
    struct Employee written, read_back;
    FILE *fp;

    printf("Enter employee name: ");
    scanf("%31s", written.name);
    printf("Enter employee id: ");
    scanf("%d", &written.id);
    printf("Enter salary: ");
    scanf("%f", &written.salary);

    fp = fopen("employee.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        return 1;
    }
    if (fwrite(&written, sizeof written, 1, fp) != 1) {
        printf("Error writing to file.\n");
        fclose(fp);
        return 1;
    }
    fclose(fp);

    fp = fopen("employee.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        return 1;
    }
    if (fread(&read_back, sizeof read_back, 1, fp) != 1) {
        printf("Error reading from file.\n");
        fclose(fp);
        return 1;
    }
    fclose(fp);

    printf("\n----- Employee Data Read from File -----\n");
    printf("Name: %s\nID: %d\nSalary: %.2f\n", read_back.name, read_back.id, read_back.salary);
    return 0;
}
