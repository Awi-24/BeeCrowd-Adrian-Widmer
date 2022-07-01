#include <stdio.h>

int main(){

    int time, speed;
    float gas, distance;
    scanf("%d %d", &time, &speed);
    distance = time*speed;
    gas = distance/12;

    printf("%.3f\n", gas);


    return 0;
}