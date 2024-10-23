#include <stdio.h>

int main() {
    float intMB1=0, intMB2=0, intdist=0;
    double k=6.67e-8;

    double result=0;

    printf("Enter the mass of body 1 (M1): ");
    scanf("%f", &intMB1);
    printf("Enter the mass of body 2 (M2): ");
    scanf("%f", &intMB2);
    printf("Enter the distance (d) : ");
    scanf("%f", &intdist);
    result= k*intMB1*intMB2;
    result = result/(intdist*intdist);
    printf("Final reuslt %e\n", result);
    return 0;
}
