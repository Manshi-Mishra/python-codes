#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
printf("enter total no.of processes:");
scanf("%d",&n);
printf("\nenter process burst time\n");
for(i=0;i<n;i++)
{
printf("P[%d]:",i+1);
scanf("%d",&bt[i]);
}
wt[0]=0;
for(i=1;i<n;i++)
{
wt[i]=0;
for(j=0;j<i;j++)
wt[i]+=bt[j];
}
printf("\nproces\t\tburst time\twaiting time\tturnaround time");
for(i=0;i<n;i++)
{
tat[i]=bt[i]+wt[i];
avwt+=wt[i];
avtat+=tat[i];
printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
}
avwt/=i;
avtat/=i;
printf("\naverage waiting time:%d",avwt);
printf("average turnaround time:%d\n",avtat);
getch();
}

OUTPUT:-
enter total no.of processes:3
                                                                                
enter process burst time                                                        
P[1]:24                                                                         
P[2]:3                                                                          
P[3]:3                                                                          
                                                                                
proces          burst time      waiting time    turnaround time                 
P[1]            24              0               24                              
P[2]            3               24              27                              
P[3]            3               27              30                              
average waiting time:17average turnaround time:27
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

