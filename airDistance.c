
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
    
    double lat1;
    double long1;
    printf("Please enter latitude(must be between -90,90) and longitude(must be between -180,180) of the first point:");
    scanf("%lf %lf", &lat1, &long1);
    if ((lat1 > 90) || (lat1 < -90)) {
        printf("latitude not between -90 and 90 ENDING");
    }
    if ((long1 > 180) || (long1 < -180)) {
        printf("longitude not between -180 and 180 ENDING");
    }
    
    double lat2;
    double long2;
    printf("Please enter the latitude(must be between -90,90) and longitude(must be between -180,180) of the second point:");
    scanf("%lf %lf", &lat2, &long2);
    if ((lat2 > 90) || (lat2 < -90)) {
        printf("latitude not between -90 and 90 ENDING");
    }
    if ((long2 > 180) || (long2 < -180)) {
        printf("longitude not between -180 and 180 ENDING");
    }
    
    double radianLat1;
    double radianLong1;
    double radianLat2;
    double radianLong2;
    double delta;
    radianLat1 = lat1 / 180 * M_PI;
    radianLong1 = long1 / 180 * M_PI;
    radianLat2 = lat2 / 180 * M_PI;
    radianLong2 = long2 / 180 * M_PI;
    delta = radianLong2 - radianLong1;
    
    double distance;
    double value;
    
    double sinLat1 = sin(radianLat1);
    double sinlat2 = sin(radianLat2);
    double cosLat1 = cos(radianLat1);
    double cosLat2 = cos(radianLat2);
    double cosDelta = cos(delta);
    //value = ((sinLat1 * sinLat2) + (cosLat1 * cosLat2 * cosDelta)); 
    double acos(value);
    //distance *= R;
    
    
    
    return 0;
    
}