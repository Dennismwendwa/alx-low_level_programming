#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

/**
  * main - entry point.
  * Return:- Always 0 (success).
  */

int main(void)
{
	char password[84];
	int index;
	int total;
	int diff1;
	int diff2;

	srand(time(0));

	while (total < 2772)
	{
		password[index] = 33 + rand() % 94;
		total += password[index++];

	}
	password[index] = '\0';

	if (total != 2772)
	{
		diff1 = (total - 2772) / 2;
		diff2 = (total - 2772) / 2;

		if ((total - 2772) % 2 != 0)
			diff1++;

		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff1))
			{
				password[index] -= diff1;
				break;
			}
		}
		for (index = 0; password[index]; index++)
		{
			if (password[index] >= (33 + diff2))
			{
				password[index] -= diff2;
				break;
			}
		}
	}
	printf("%s", password);
	return (0);
}
























