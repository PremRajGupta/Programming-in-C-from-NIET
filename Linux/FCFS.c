#include <stdio.h>

int main()
{
    int n, i;
    int burstTime[20], waitingTime[20], turnaroundTime[20];
    float avgWaitingTime = 0, avgTurnaroundTime = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter Burst Time for each process:\n");
    for (i = 0; i < n; i++)
    {
        printf("Process %d: ", i + 1);
        scanf("%d", &burstTime[i]);
    }

    // Waiting time for first process is 0
    waitingTime[0] = 0;

    // Calculate waiting time
    for (i = 1; i < n; i++)
    {
        waitingTime[i] = burstTime[i - 1] + waitingTime[i - 1];
    }

    // Calculate turnaround time
    for (i = 0; i < n; i++)
    {
        turnaroundTime[i] = burstTime[i] + waitingTime[i];
        avgWaitingTime += waitingTime[i];
        avgTurnaroundTime += turnaroundTime[i];
    }

    avgWaitingTime /= n;
    avgTurnaroundTime /= n;

    printf("\nProcess\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++)
    {
        printf("P%d\t\t%d\t\t%d\t\t%d\n",
               i + 1, burstTime[i], waitingTime[i], turnaroundTime[i]);
    }

    printf("\nAverage Waiting Time = %.2f", avgWaitingTime);
    printf("\nAverage Turnaround Time = %.2f\n", avgTurnaroundTime);

    return 0;
}