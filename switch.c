#include <stdio.h>

int main() {
    int score;
    char grade;

    printf("Enter your score: ");
    scanf("%d", &score);

    if (score >= 85 && score <= 100)
    {
        grade = 'A';
    }
    else if (score >= 70 && score <= 84)
    {    
        grade = 'B';
    }
    else if (score >= 53 && score <= 69)
    {
        grade = 'C';
    }
    else if (score >= 35 && score <= 52)
    {
        grade = 'D';
    }
    else
    {
        grade = 'F';
    }
    
    printf("Your grade is %c. ", grade);

    switch (grade) {
        case 'A':
            printf("Excellent work!\n");
            break;
        case 'B':
            printf("Well done\n");
            break;
        case 'C':
            printf("Good job\n");
            break;
        case 'D':
            printf("You passed, but you could do better\n");
            break;
        case 'F':
            printf("Sorry, you failed\n");
            break;
    }
}