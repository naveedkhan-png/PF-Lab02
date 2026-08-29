#include <stdio.h>
int main()
{
    double basic_salary = 85000.00;
    double house_rent_allowance = 0.20 * basic_salary;
    double medical_allowance = 0.10 * basic_salary;
    double gross_salary = basic_salary + house_rent_allowance + medical_allowance;
    double income_tax_deduction = 0.05 * gross_salary;
    double net_salary = gross_salary-  income_tax_deduction;
    printf("===============MONTHLY SALARY SLIP ================\n");
    printf("Basic Salary:               PKR %.2f\n",basic_salary);
    printf("House Rent Allowance (20%%) :    PKR %.2f\n",house_rent_allowance);
    printf("Medical Allowance (10%%) :      PKR %.2f\n",medical_allowance);
    printf("-----------------------------------------------------\n");
    printf("Gross salary:          PKR %.2f\n",gross_salary);
    printf("Tax Deduction (5%%):     PKR %.2f\n",income_tax_deduction);
    printf("-----------------------------------------------------\n");
    printf("NET Payable Salary:     PKR %.2f\n",net_salary);
    printf("======================================================\n");
    return 0;
    
    
}