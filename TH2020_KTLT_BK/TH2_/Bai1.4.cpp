#include <stdio.h>

int cube(int x) {
    return x * x * x;
}

double cube(double x) {
    return x * x * x;
}

int main() {
    int n;
    double y;
    printf("HOVATEN: EANG SOKUNTHEA\n");
    printf("MSSV: 20180280\n");
    scanf("%d %lf", &n, &y);
    printf("Int: %d\n", cube(n));
    printf("Double: %.2lf\n", cube(y));
    
    return 0;
}
