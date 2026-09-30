Q79 (2D Arrays)
📋
Perform diagonal traversal of a matrix.


  #include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the size of matrix: ");
    scanf("%d", &n);

    int a[n][n];

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Diagonal traversal:\n");

    // Start from the first row
    for (i = 0; i < n; i++) {
        int row = 0;
        int col = i;

        while (row < n && col >= 0) {
            printf("%d ", a[row][col]);
            row++;
            col--;
        }
    }

    // Start from the last column
    for (i = 1; i < n; i++) {
        int row = i;
        int col = n - 1;

        while (row < n && col >= 0) {
            printf("%d ", a[row][col]);
            row++;
            col--;
        }
    }

    return 0;
}
