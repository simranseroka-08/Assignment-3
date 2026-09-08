#include <stdio.h>
int main() {
    int num, n;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Shift by: ");
    scanf("%d", &n);
    printf("%d << %d = %d\n", num, n, num << n);
    printf("%d >> %d = %d\n", num, n, num >> n);
    return 0;
}
