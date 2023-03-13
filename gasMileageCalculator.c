#include <stdio.h>

int main(void){
    float gals = 0;
    float miles = 0;
    float totalGals = 0;
    float totalMiles = 0;
    int count = 0;

    while (gals != -1){
        printf("Enter gallons used (-1 to exit):");
        scanf("%f", &gals);
        if (gals == -1){
            break;
        }
        printf("Enter miles driven:");
        scanf("%f", &miles);
        totalGals += gals;
        totalMiles += miles;
        count++;
        printf("MPG this trip: %f\n", miles/gals);
    }
    printf("Total MPG: %f\nTotal Trips: %d", totalMiles/totalGals, count);
    return 0;
}