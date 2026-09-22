Q76 (2D Arrays)
📋
Check if a matrix is symmetric.


  #include <stdio.h>

int main() {
    int a[10][10];
    int n;
    int i, j, symmetric = 1;

    printf("Enter size of matrix: ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                symmetric = 0;
                break;
            }
        }
    }

    if (symmetric == 1) {
        printf("Matrix is symmetric\n");
    } else {
        printf("Matrix is not symmetric\n");
    }

    return 0;
}
