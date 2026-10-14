#include <stdio.h>

int main() {
    int a;
    float b;
    char c;
    double d;

    printf("Enter an integer, float, character and double: ");
    scanf("%d %f %c %lf", &a, &b, &c, &d);

    printf("Integer = %d\n", a);
    printf("Float = %f\n", b);
    printf("Character = %c\n", c);
    printf("Double = %lf\n", d);

    return 0;
}
