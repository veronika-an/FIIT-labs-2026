#include <stdio.h>
#include <math.h>

int main() {
    double a, b, xa, ya, xb, yb;
    scanf_s("%lf %lf %lf %lf %lf %lf", &a, &b, &xa, &ya, &xb, &yb);
    double dist = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
    if (dist == (a + b)) {
        printf("okrugnosty kasautsya \n");
        return 0;
    }
    else if (dist > a + b) {
        printf("okrugnosty ne kasautsya \n");
        return 0;
    }
    else if ((a == b) && (dist == 0)) {
            printf("okrugnosty sovpadayut\n");
            return 0;
    }
    else if (dist == (fmax(a, b) - fmin(a, b))) {
        printf("odna okrygnost vnutri drugoi i kasaetsya ee\n");
        return 0;
    }
    else if (dist < (fmax(a, b) - fmin(a, b))) {
        printf("odna okrygnost vnutri drugoi\n");
        return 0;
    }

    else {
        printf("okrugnosty peresekautsya\n");
    }
}