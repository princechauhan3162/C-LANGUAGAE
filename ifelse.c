#include <stdio.h>

int main()
{
    int marks;
    printf("ENTER YOUR MARKS : ");
    scanf("%d", &marks);

 if(marks >= 85 && marks <= 100)
    {
        printf("YOUR GRADE IS A. EXCELLENT WORK! YOU ARE ELIGILABLE FOR NEXT LEVEL");
    }
    else if (marks >= 70 && marks <= 84)
    {
        printf("YOUR GRADE IS B. WELL DONE! YOU ARE ELIGILABLE FOR NEXT LEVEL");
    }
    else if (marks >= 53 && marks <= 69)
    {
        printf("YOUR GRADE IS C. GOOD JOB! YOU ARE ELIGILABLE FOR NEXT LEVEL");
    }
    else if (marks >= 35 && marks <= 52)
    {
        printf("YOUR GRADE IS D. YOU PASSED THE EXAM! YOU ARE ELIGILABLE FOR NEXT LEVEL");
    }
    else{
        printf("FAIL , PLEASE TRY AGAIN NEXT TIME");
    }
}