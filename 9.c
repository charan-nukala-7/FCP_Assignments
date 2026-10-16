#include <stdio.h>

int main(void)
{
    int hr, min, sec, totalSeconds;

    printf("Enter hours: ");
    scanf("%d", &hr);

    printf("Enter minutes: ");
    scanf("%d", &min);

    printf("Enter seconds: ");
    scanf("%d", &sec);

    totalSeconds = (hr * 3600) + (min * 60) + sec;

    printf("Total seconds = %d\n", totalSeconds);

    return 0;
}
