#include <stdio.h>

void split_time(long total_sec, int *hr, int *min, int *sec){
    *sec = total_sec%60;
    *min = (total_sec%3600)/60;
    *hr = total_sec/3600;
}

int main(void) {

    long total_sec = 23*3600 + 52*60 + 39;

    int hr, min, sec;
    
    split_time(total_sec, &hr, &min, &sec);
    printf("Hours: %d, Minutes: %d, Seconds: %d\n", hr, min, sec);
    return 0;
}