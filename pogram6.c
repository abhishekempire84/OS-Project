#include <stdio.h>

int main() 
{
      int at[10], bt[10], rt[10],temp[10];
      int i, smallest, count = 0, time, n,timemax=2;
      double wt = 0, turnaround_t = 0, end;
      float avg_w_t, avg_t_t;
      printf("\nEnter the  Number of Processes:\t");
      scanf("%d", &n); 
      printf("\nEnter Details of all %d Processes\n", n);
      for(i = 0; i < n; i++)
      {
            printf("\nEnter Arrival Time:\t");
            scanf("%d", &at[i]);
            printf("Enter Burst Time:\t");
            scanf("%d", &bt[i]); 
            temp[i] = bt[i];
      }
      bt[9] = 9999;  
      for(time = 0; count != n; time++)
      {
            smallest = 9;
            for(i = 0; i < n; i++)
            {
                  if(at[i] <= time && bt[i] < bt[smallest] && bt[i] > 0)
                  {
                        smallest = i;
                  }
            }
            bt[smallest]--;
            if(bt[smallest] == 0)
            {
                  count++;
                  end = time + 1;
                  wt = wt + end - at[smallest] - temp[smallest];
                  turnaround_t = turnaround_t + end - at[smallest];
            }
      }
      
      	for(i=0;i<n;i++)
		{
			for(time=0;time<=timemax;time++)
			{
				if(bt[i]>0 && bt[i]>=timemax)
				{
					rt[i]=bt[i];
					rt[i]-=timemax;
				
				}
				else if(bt[i]>0 && bt[i]<timemax)
				{
					rt[i]=bt[i];
					rt[i]=0;
				}
			
			}
		}
      avg_w_t = wt / n; 
      avg_t_t = turnaround_t / n;
      printf("\n\nAverage Waiting Time:\t%lf\n", avg_w_t);
      printf("Average Turnaround Time:\t%lf\n", avg_t_t);
      return 0;
}
