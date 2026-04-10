#include <stdio.h>

int main(void)
{
    int areacode = 706;
    const char *city;

    switch (areacode){
        case 229:
            city = "Albany\0";
            break;
        case 404:
        case 470:
        case 770:
        case 678:
            city = "Atlanta\0";
            break;
        case 478:
            city ="Macon\0";
            break;
        case 706:
        case 762:
            city = "Columbus\0";
            break;
        case 912:
            city = "Savannah\0";
            break;
        default:
            city = "Unknown";

            
    }

    printf("%d: %s", areacode, city);

    return 0;
}