// C program to demonstrate nanosleep() function

#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <time.h>

enum { SECS = 2,
    NANOSEC = 30 };

int main()
{
    struct timespec r1, r2 = { SECS, NANOSEC };
    int cnt = 0;

    printf("Counter stated..\n");
    while (cnt <= 10) {
        printf("Counter:  %d\n", cnt);
        if (cnt == 5) {
            printf("Sleeping ....\n");
            nanosleep(&r2, &r1);
        }
        cnt++;
    }
    return 0;
}
