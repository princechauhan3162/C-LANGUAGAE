#include <stdio.h>

int main() {
    float baseSalary, hraPercent, daPercent, taPercent;
    float hra, da, ta, grossSalary;

    printf("Enter Base Salary: ");
    scanf("%f", &baseSalary);

    printf("Enter HRA: ");
    scanf("%f", &hraPercent);

    printf("Enter DA: ");
    scanf("%f", &daPercent);

    printf("Enter TA: ");
    scanf("%f", &taPercent);

    hra = (hraPercent / 100) * baseSalary;
    da = (daPercent / 100) * baseSalary;
    ta = (taPercent / 100) * baseSalary;

    grossSalary = baseSalary + hra + da + ta;

    printf("Gross Salary: %f\n", grossSalary);
}