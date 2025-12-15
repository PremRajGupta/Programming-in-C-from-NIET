#include <stdio.h>

int main()
{
    int n, i, j;
    int burstTime[20], priority[20], process[20];
    int waitingTime[20], turnaroundTime[20];
    int temp;
    float avgWaitingTime = 0, avgTurnaroundTime = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        process[i] = i + 1;
        printf("Enter Burst Time for P%d: ", i + 1);
        scanf("%d", &burstTime[i]);
        printf("Enter Priority for P%d: ", i + 1);
        scanf("%d", &priority[i]);
    }

    // Sort processes by priority
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (priority[i] > priority[j])
            {
                // swap priority
                temp = priority[i];
                priority[i] = priority[j];
                priority[j] = temp;

                // swap burst time
                temp = burstTime[i];
                burstTime[i] = burstTime[j];
                burstTime[j] = temp;

                // swap process number
                temp = process[i];
                process[i] = process[j];
                process[j] = temp;
            }
        }
    }

    // Waiting time for first process
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

    printf("\nProcess\tPriority\tBurst Time\tWaiting Time\tTurnaround Time\n");
    for (i = 0; i < n; i++)
    {
        printf("P%d\t\t%d\t\t%d\t\t%d\t\t%d\n",
               process[i], priority[i], burstTime[i],
               waitingTime[i], turnaroundTime[i]);
    }

    printf("\nAverage Waiting Time = %.2f", avgWaitingTime);
    printf("\nAverage Turnaround Time = %.2f\n", avgTurnaroundTime);

    return 0;
}