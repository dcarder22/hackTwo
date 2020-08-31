
/* 
Author: Dalton Carder

Hack # 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

int main() {
    const double R = 6371.0;
    
    //initialize the variables
    double lat1;
    double long1;
    //get the variables from the user
    printf("Please enter latitude(must be between -90,90) and longitude(must be between -180,180) of the first point:");
    scanf("%lf %lf", &lat1, &long1);
    if ((lat1 > 90) || (lat1 < -90)) {
        printf("latitude not between -90 and 90 ENDING");
    }
    if ((long1 > 180) || (long1 < -180)) {
        printf("longitude not between -180 and 180 ENDING");
    }
    
    //initialize variables
    double lat2;
    double long2;
    //get the variables from user
    printf("Please enter the latitude(must be between -90,90) and longitude(must be between -180,180) of the second point:");
    scanf("%lf %lf", &lat2, &long2);
    if ((lat2 > 90) || (lat2 < -90)) {
        printf("latitude not between -90 and 90 ENDING");
    }
    if ((long2 > 180) || (long2 < -180)) {
        printf("longitude not between -180 and 180 ENDING");
    }
    
    //initialize the variables
    double radianLat1;
    double radianLong1;
    double radianLat2;
    double radianLong2;
    double delta;
    //calculate the variables
    radianLat1 = lat1 / 180 * M_PI;
    radianLong1 = long1 / 180 * M_PI;
    radianLat2 = lat2 / 180 * M_PI;
    radianLong2 = long2 / 180 * M_PI;
    delta = radianLong2 - radianLong1;
    
    //initialize the calculate the final distance
    double distance;
    double value;
    double sLat1, sLat2, cLat1, cLat2, cDelta; 
    sLat1 = sin(radianLat1);
    sLat2 = sin(radianLat2);
    cLat1 = cos(radianLat1);
    cLat2 = cos(radianLat2);
    cDelta = cos(delta);
    value = ((sLat1 * sLat2) + (cLat1 * cLat2 * cDelta)); 
    distance = acos(value);
    distance *= R;
    
    //format and print the final distance
    printf("Location Distance\n");
    printf("=======================\n");
    printf("Origin:      (%f, %f)\n", lat1, long1);
    printf("Destination: (%f, %f)\n", lat2, long2);
    printf("Air distance is %f kms\n", distance);
    
    
    
    return 0;
    
}