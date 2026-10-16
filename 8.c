// EARTH TAKES A PERIOD OF REVOLUTION OF 31558150 SECONDS .WRITE A C PROGRAM TO CONVERT THIS INTO 
// NUMBER OF DAY,HOURS AND MINUTES 
#include <stdio.h>

int main(void)
{
	const long long total_seconds = 31558150;
	long long days, hours, minutes, seconds;

	days = total_seconds / (24 * 3600);
	hours = (total_seconds % (24 * 3600)) / 3600;
	minutes = (total_seconds % 3600) / 60;
	seconds = total_seconds % 60;

	printf("Number of days: %lld\n", days);
	printf("Number of hours: %lld\n", hours);
	printf("Number of minutes: %lld\n", minutes);
	printf("Number of seconds: %lld\n", seconds);

	return 0;
}