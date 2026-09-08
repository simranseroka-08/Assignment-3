#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, D, root1, root2;
    printf("Enter coefficients a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    D = (b * b) - (4 * a * c);
   if (D >= 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        if (D == 0)
            printf("Roots are equal: %.4lf\n", root1);
        else
            printf("Roots are real and distinct: %.4lf and %.4lf\n", root1, root2);
    } else {
        printf("Discriminant is negative — roots are complex (not handled here).\n");
    }
    return 0;
}
