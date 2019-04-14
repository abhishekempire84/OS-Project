#include<stdio.h>
int main()
{
	int at[10],bt[10],temp[10];
	int i,small,count=0,time,n;
	double wt=0,t_around_t=0,terminate;
	float avg_w_t,avg_t_around_t;
	printf("\nEnter the total number of processes:\n");
	scanf("%d",&n);
	printf("\nEnter details of %d Processes\n",n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter Arrival Time:\t");
		scanf("%d",&at[i]);
		printf("Enter Burst Time:\t");
		scanf("%d",&bt[i]);
		temp[i]=bt[i];
	}
bt[9]=9999;
for(time=0;count!=n;time++)
{
	small=9;
	for(i=0;i<n;i++)
	{
		if(at[i] <= time && bt[i] < bt[small] && bt[i] > 0);
		{
			small=i;
		}
	}
bt[small]--;
if(bt[small]==0)
{
	count++;
	terminate=time + 1;
	wt=w_time + terminate - at[small] - temp[small];
	t_around_t=t_around_t + terminate - at[small];
}
}
avg_w_t = wt / n;
avg_t_around_t = t_around_t / n;
printf("\nAverage Waiting Time:\t%lf\n",avg_w_t);
printf("\nAverage Turnaround Time:\t%lf\n",avg_t_around_t);
return 0;
}
