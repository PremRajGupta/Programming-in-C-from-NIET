#include <stdio.h>

int main()
{
    int n, i;
    int burstTime[20], remainingTime[20];
    int waitingTime[20], turnaroundTime[20];
    int timeQuantum;
    int time = 0;
    float avgWaitingTime = 0, avgTurnaroundTime = 0;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    printf("Enter Burst Time for each process:\n");
    for (i = 0; i < n; i++)
    {
        printf("Process %d: ", i + 1);
        scanf("%d", &burstTime[i]);
        remainingTime[i] = burstTime[i];
    }

    printf("Enter Time Quantum: ");
    scanf("%d", &timeQuantum);

    // Round Robin Scheduling
    while (1)
    {
        int done = 1;

        for (i = 0; i < n; i++)
        {
            if (remainingTime[i] > 0)
            {
                done = 0;

                if (remainingTime[i] > timeQuantum)
                {
                    time += timeQuantum;
                    remainingTime[i] -= timeQuantum;
                }
                else
                {
                    time += remainingTime[i];
                    waitingTime[i] = time - burstTime[i];
                    remainingTime[i] = 0;
                }
            }
        }

        if (done == 1)
            break;
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