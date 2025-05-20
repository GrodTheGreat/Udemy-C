#include <stdio.h>

int main() {
    double width = 7.1;
    double height = 6.8;
    double area = 0.0;
    double perimeter = 0.0;

    perimeter = (width + height) * 2;
    area = width * height;

    printf("Width: %f\nHeight: %f\nArea: %f\nPerimeter: %f\n", width, height, area, perimeter);

    return 0;
}
