#include <stdio.h>
#include <math.h>
float standard_deviation(float data[], int n);
int main()
{
    int n, i;
    float data[100] = {95,52,79,31,79,140,175,101,140,158,80,92,90,67,88,97,87,98,105,80,103,106,114,115,100,132,112,162,104,124,116,81,197,138,100,44,156,92,72,97,88,69,117,64,51,138,60,67,87,78};
    clrscr();
    printf("Enter number of datas( should be less than 100): ");
    scanf("%d",&n);
    printf("Enter elements: ");
   // for(i=0; i<n; ++i)
   //	scanf("%f",&data[i]);
    printf("\n");
    printf("Standard Deviation = %.2f", standard_deviation(data,n));
    getch();
    return 0;
}
float standard_deviation(float data[], int n)
{
    float mean=0.0, sum_deviation=0.0;
    int i;
    for(i=0; i<n;++i)
    {
	mean+=data[i];
    }
    mean=mean/n;
    printf("Mean : %f\n",mean);
    for(i=0; i<n;++i)
    sum_deviation+=(data[i]-mean)*(data[i]-mean);
    return sqrt(sum_deviation/(n-1));
}