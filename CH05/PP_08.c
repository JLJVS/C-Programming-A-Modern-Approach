#include <stdio.h>
#include <stdlib.h>

int convert_to_mins(int hours, int mins){
    return 60*hours + mins;
}
int convert_to_hours(int mins){
    return mins/60;
}

int get_mins(int mins){
    return mins%60;
}

int main(void)
{
    int dep1, dep2, dep3, dep4, dep5, dep6, dep7, dep8;
    int arr1, arr2, arr3, arr4, arr5, arr6, arr7, arr8;
    int hour, min, time, diff, closest_match, arr_time;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &min);
    time = convert_to_mins(hour, min);
        
    dep1 = convert_to_mins(8, 0);
    dep2 = convert_to_mins(9, 43);
    dep3 = convert_to_mins(11, 19);
    dep4 = convert_to_mins(12, 47);
    dep5 = convert_to_mins(14, 0);
    dep6 = convert_to_mins(15, 45);
    dep7 = convert_to_mins(19, 0);
    dep8 = convert_to_mins(21, 45);

    arr1 = convert_to_mins(10, 16);
    arr2 = convert_to_mins(11, 52);
    arr3 = convert_to_mins(13, 31);
    arr4 = convert_to_mins(15, 0);
    arr5 = convert_to_mins(16, 8);
    arr6 = convert_to_mins(17, 55);
    arr7 = convert_to_mins(21, 20);
    arr8 = convert_to_mins(23, 58);

    diff = abs(time - dep1);
    closest_match = dep1;
    arr_time = arr1;

    if (abs(time - dep2) < diff){
        diff = abs(time - dep2);
        closest_match = dep2;
        arr_time = arr2;
    }
    if (abs(time - dep3) < diff){
        diff = abs(time - dep3);
        closest_match = dep3;
        arr_time = arr3;
    } else if (abs(time - dep4) < diff){
        diff = abs(time - dep4);
        closest_match = dep4;
        arr_time = arr4;
    }
    if (abs(time - dep5) < diff){
        diff = abs(time - dep5);
        closest_match = dep5;
        arr_time = arr5;
    }
    if (abs(time - dep6) < diff){
        diff = abs(time - dep6);
        closest_match = dep6;
        arr_time = arr6;
    }
    if (abs(time - dep7) < diff){
        diff = abs(time - dep7);
        closest_match = dep7;
        arr_time = arr7;
    } 
    if (abs(time - dep8) < diff){
        diff = abs(time - dep8);
        closest_match = dep8;
        arr_time = arr8;
    }

    printf("Closest departure time is %02d:%02d, arriving at %02d:%02d", convert_to_hours(closest_match), get_mins(closest_match), convert_to_hours(arr_time), get_mins(arr_time));
    return 0;
}