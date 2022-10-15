#include<stdio.h>
int main ()
{
    float s1,s2,s3,s4,s5;
    float total,average,percentage;
    printf("Enter Marks Of Five Subjects: \n");
    scanf("%f%f%f%f%f", &s1,&s2,&s3,&s4,&s5);
    total = s1+s2+s3+s4+s5;
    average = total/5.0;
    percentage = (total/500.0)*100;
    printf("Total Marks =%.2f\n", total);
    printf("Average Marks =%.2f\n", average);
    printf("Percentage =%.2f\n", percentage);
    return 0;
}
