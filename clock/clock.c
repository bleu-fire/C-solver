#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{


  int  hour = 0 ,minute =0, second = 0;

  while (1)
  {

    printf("\r%02d:%02d:%02d", hour, minute, second);
    fflush(stdout);
    sleep(1);
    second++;

    if (second == 60)
    {
      second = 0;
      minute++;
    }
    if (minute == 60)
    {
      minute = 0;
      hour++;
    }
    if (hour == 24)
    {
      hour =0;
    }
  }
}
