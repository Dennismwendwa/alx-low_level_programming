#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - main entry point
  *
  * Return:- Always return 0 (success)
  */

void positive_or_negative(int i)
{
        int n;

        srand(time(0));
        n = rand() - RAND_MAX / 2;

        if (n < 0)
        {

        printf("%d is negative\n", n);


        }
        else if (n == 0)
        {
        printf("%d is zero\n", n);
          }
          else         { 
        printf("%d is positive\n", n);
  
          }
 
 }