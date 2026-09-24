#include <stdio.h>
int main() {
    int i = 10;
    float f = 3.14;
    double d = 3.14159265;
    char ch = 'X';
    printf("int: %d, size = %lu bytes\n", i, sizeof(i));
    printf("float: %f, size = %lu bytes\n", f, sizeof(f));
    printf("double: %lf, size = %lu bytes\n", d, sizeof(d));
    printf("char: %c, size = %lu bytes\n", ch, sizeof(ch));
    return 0;
}
