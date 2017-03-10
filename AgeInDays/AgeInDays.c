#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

int main()
{
	puts("Enter your age in this year");
	int age;
	scanf("%d", &age);

	time_t rawtime;
	struct tm * timeinfo; //timeinfo struct

	time(&rawtime);
	timeinfo = localtime(&rawtime);

	int days = 0;
	for (int i = 0; i < age; i++)
	{
		days += 365;
		if ((timeinfo->tm_year - i) % 4 == 0)
			days++;
	}

	printf("Days in life %d\n", days);

	return 0;
}