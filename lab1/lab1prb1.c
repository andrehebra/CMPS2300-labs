/*lab 1 prb 1
Performance stats
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
int mon;
printf("Enter monday idle time (in minutes): ");
scanf("%d", &mon);

int tue;
printf("Enter tuesday idle time: ");
scanf("%d", &tue);

int wed;
printf("Enter wednesday idle time: ");
scanf("%d", &wed);

int th;
printf("Enter thursday idle time: ");
scanf("%d", &th);

int fri;
printf("Enter friday idle time: ");
scanf("%d", &fri);

int sat;
printf("Enter saturday idle time: ");
scanf("%d", &sat);

int sun;
printf("Enter sunday idle time: ");
scanf("%d", &sun);

int totalTime = mon + tue + wed + th + fri + sat + sun;
printf("\ntotal time spent idle is: %d", totalTime);

double avg = (double)totalTime/7;
printf("\naverage time idle per day is %f", avg);

int times[7];
times[0] = mon;
times[1] = tue;
times[2] = wed;
times[3] = th;
times[4] = fri;
times[5] = sat;
times[6] = sun;


char days[8][9] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int minLow = times[0];
int lowDay = 0;
int minHigh = times[0];
int highDay = 0;
for (int i = 0; i < 7; i++)
{
  if (times[i] < minLow){
    minLow = times[i];
    lowDay = i;
  }
  if (times[i]>minHigh){
    minHigh = times[i];
    highDay = i;
  }
}
printf("\nhigh idle time was on %s ", days[highDay]);
printf("\nlow idle time was on %s", days[lowDay]);

double idleTime = (double)totalTime/10800;
printf("\nthe computer has been idle for %f percent of the week", idleTime);

printf("\n");
return 0;
}
