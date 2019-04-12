#include<stdio.h>
int main()
{
	int a_time[10],b_time[10],temp[10];
	int i,small,count=0,time,limit;
	double w_time=0,t_around_time=0,terminate;
	float avg_w_time,avg_t_around_time;
	printf("\nEnter the total number of processes:\n");
	scanf("%d",&limit);
	printf("\nEnter details of %d Processes\n",limit);
	for(i=0;i<limit;i++)
	{
		printf("\nEnter Arrival Time:\t");
		scanf("%d",&a_time[i]);
		printf("Enter Burst Time:\t");
		scanf("%d",&b_time[i]);
		temp[i]=b_time[i];
	}
b_time[9]=9999;
for(time=0;count!=limit;time++)
{
	small=9;
	for(i=0;i<limit;i++)
	{
		if(a_time[i] <= time && b_time[i] < b_time[small] && b_time[i] > 0);
		{
			small=i;
		}
	}
b_time[small]--;
if(b_time[small]==0)
{
	count++;
	terminate=time + 1;
	w_time=w_time + terminate - a_time[small] - temp[small];
	t_around_time=t_around_time + terminate - a_time[small];
}
}
avg_w_time = w_time / limit;
avg_t_around_time = t_around_time / limit;
printf("\nAverage Waiting Time:\t%lf\n",avg_w_time);
printf("\nAverage Turnaround Time:\t%lf\n",avg_t_around_time);
return 0;
}
