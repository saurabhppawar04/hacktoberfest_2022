#include <stdio.h>
int main()
{   
   int i,n,j,total_wt=0,total_tat=0,pos,temp;
   float avg_wt,avg_tat;
   int bt[10],proc[10],wt[10],tat[10];
   
	printf("Enter the no of processes:");
	scanf("%d",&n);
  for(i = 0;i<n;i++)
  {
	printf("\nEnter the burst time of process %d :",i+1);
	scanf("%d",&bt[i]);
	proc[i] = i+1;
  }
 
 for(i=0;i<n;i++)
 {
	 pos = i;
	    for(j=i+1;j<n;j++)
	    {
			if(bt[j] < bt[pos])
			{
				pos = j;
			}
	     temp = bt[i];
	     bt[i] = bt[pos];
	     bt[pos] = temp;
	       
	     temp = proc[i];
	     proc[i] = proc[pos];
	     proc[pos] = temp;
      }
  }
  wt[0] = 0;
  for(i=0;i<n;i++)
    {
      wt[i+1] = wt[i] + bt[i];
      total_wt = total_wt + wt[i];
    }
    
    avg_wt = total_wt/n;
    
    for(i=0;i<n;i++)
    {
     tat[i] = wt[i]+bt[i];
     total_tat = total_tat + tat[i];
    }
    avg_tat = total_tat/(float)n;
  
    printf("Processes \tBurst time \twaiting time \tTurn around time \n");
    for(int i=0;i<n;i++)
    {
		printf("%d\t\t %d \t\t%d \t\t%d\n",proc[i],bt[i],wt[i],tat[i]);
    }
      printf("\nAverage waiting time : %f",avg_wt);
      printf("\nAverage Turn around time : %f",avg_tat);
    return 0;
 }
    

