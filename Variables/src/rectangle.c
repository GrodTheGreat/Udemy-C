#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    double width = atoi(argv[1]);
    double height = atoi(argv[2]);
    double area = 0.0;
    double perimeter = 0.0;

    perimeter = (width + height) * 2;
    area = width * height;

    printf("Width: %.2f\nHeight: %.2f\nArea: %.2f\nPerimeter: %.2f\n", width, height, area, perimeter);

    return 0;
}
