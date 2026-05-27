#include <stdio.h>

struct time {
    int hours;
    int minutes;
    int seconds;
};

struct time split_time(long total_seconds){
    if (total_seconds > 24*60*60){
        printf("More seconds than there are in a day. We'll give you the time in a new day.\n");
        total_seconds = total_seconds%(24*60*60);
    }
    int h = total_seconds / 3600;
    int m = (total_seconds%3600)/60;
    int s = total_seconds%60;
    struct time t = {h, m, s};
    return t;
}


int main() {
    long tests[] = {
        0,
        59,
        60,
        3599,
        3600,
        3661,
        86399,   // one second before midnight
        90061    // 25 hours, 1 minute, 1 second
    };

    for (int i = 0; i < 8; i++) {
        struct time t = split_time(tests[i]);
        printf("Input: %ld seconds -> %02d:%02d:%02d\n",
               tests[i], t.hours, t.minutes, t.seconds);
    }

    return 0;
}