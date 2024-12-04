#include <stdio.h>

int main() {
    float x, y;

    // Input the coordinates of the point
    printf("Enter the coordinates of the point (x, y): ");
    scanf("%f %f", &x, &y);

    // Check the position of the point
    if (x == 0 && y == 0) {
        printf("The point lies at the origin.\n");
    } else if (y == 0) {
        printf("The point lies on the X-axis.\n");
    } else if (x == 0) {
        printf("The point lies on the Y-axis.\n");
    } else {
        printf("The point does not lie on either axis.\n");
    }

    return 0;
}
