#include  <stdio.h>
#include  <time.h>
#include  <unistd.h>
#include  <stdlib.h>


int main  (){
    int hour  , minute , second;
    hour = minute =  second = 0;
    while(1){
      system("clear");
      printf("%02d:%02d:%02d",hour,minute,second);

      //free buffer
      fflush(stdout);
      sleep(1);
      second++;

    if(second==60){
      second = 0 ;
      minute++;

    }
    
    if(minute==60){
      hour=1;
      minute++;

    }

    if(hour==24){
      hour=0;

    }
}





}
