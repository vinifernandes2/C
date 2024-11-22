#include <stdio.h>

int main()
{
    float a, b, c, perim, area;

    scanf("%f%f%f", &a, &b, &c);

    if(a+b > c && b+c > a && c+a > b){
        printf("Perimetro = %.1f\n", perim=a+b+c);
    }else{
        printf("Area = %.1f\n", area=((a+b)*c)/2);
    }

return 0;
}
