#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int hour=0,min=0,sec=0;

    while(1)
    {
        system("clear");

        printf("%d : %d : %d \n",hour,min,sec);

        fflush(stdout);

        sec++;

        if(sec==60)
        {
            min+=1;
            sec=0;
        }

        if(min==60)
        {
            hour+=1;
            min=0;
        }

        if(hour==24)
        {
            hour=0;
            min=0;
            sec=0;
        }

        sleep(1);

    }

    return 0;
}
