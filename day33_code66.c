Q66 (Arrays (1D))
📋
Insert an element in a sorted array at the appropriate position.




  #include <stdio.h>

int main() {
    int a[100], n, x;
    int i, pos;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter sorted elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter element to insert: ");
    scanf("%d", &x);

    pos = n;

    for (i = 0; i < n; i++) {
        if (a[i] > x) {
            pos = i;
            break;
        }
    }

    for (i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    a[pos] = x;
    n++;

    printf("Array after insertion: ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
