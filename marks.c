#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    int tot;
    float percentage;
    printf("Enter marks for 6 subjects:");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    
    tot=a+b+c+d+e+f;

    percentage = (tot / 600.0) * 100;
    
    printf("Tot = %d\n", tot);

    printf("Percentage = %.2f\n", percentage);
    
    if(tot>95) 
    {
        printf("Excellent");
    }
    else if(tot>=80 && tot<=90 )
    {
        printf("Very Good");
    }
    else if(tot>=70 && tot<=80)
    {
        printf("Good");
    }
    else if(tot>=60 && tot<=70)
    {
        printf("Average");
    }
    else if(tot<50)
    {
        printf("Needs Improvement");
    }
    else
        printf("Invalid");

    return 0;
}