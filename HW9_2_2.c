#include<Stdio.h>
int main(void)
{
    int score;
    double average;
    int total = 0;
    int j = 0;
    int best = 0;
    while (1)
    {
        printf("Enter a score(-1 for exit):");
        scanf_s("%d", &score);

        if (score == -1)
            break;
        else
        {
            total += score;
            j++;
            if (best < score)
                best = score;
        }

    }
    if (total == 0)
    {
        printf("You've entered 0 students\n");
        printf("There is no data\n");
    }
    else
    {
        average = (double)total / j;
        printf("You've entered %d students\n", j);
        printf("The total is %d\n", total);
        printf("The average is %.1f\n", average);
        printf("The best score is %d\n", best);
    }

    //���ѹݺ� while(1)�� ó���� ���� �ʿ� ����. break�� ����ϸ� ��.









}