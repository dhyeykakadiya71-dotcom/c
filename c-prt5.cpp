#include <stdio.h>
int main() {
    float r, volume, surfaceArea;
    printf("Enter radius of sphere: ");
    scanf("%f", &r);
    volume = (4.0 / 3.0) * 3.14159 * r * r * r;
    surfaceArea = 4 * 3.14159 * r * r;
    printf("Volume = %.2f\n", volume);
    printf("Surface Area = %.2f\n", surfaceArea);
    return 0;
}
