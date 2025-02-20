#include <stdio.h>

int main() {
    
    int a, b, c, d, e, f, g, h;
    
    printf("Enter 7 numbers: ");
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g);
    
    h = a;
    
    if (b < h) h = b;
    if (c < h) h = c;
    if (d < h) h = d;
    if (e < h) h = e;
    if (f < h) h = f;
    if (g < h) h = g;
    
    printf("The minimum number is: %d\n", h);


    return 0;
}
