#include <stdio.h>
int main()
{
    float principal = 250000.00;
    float rate = 8.5;
    int time = 3;
    float simple_interest = (principal*rate*time)/100.0;
    float total_payable_amount = principal+simple_interest;
    float monthly_installment = total_payable_amount/(time * 12.0);
    printf("===============BANK LOAN INTEREST SUMMARY================\n");
    printf("Principal Amount:        PKR %.2f \n",principal);
    printf("Annual Interset Rate:    %.2f%\n",rate);
    printf("Loan Duration:            %d years (36 months)\n",time);
    printf("---------------------------------------------------------\n");
    printf("Total Acuured Interest:  PKR %.2f \n",simple_interest);
    printf("Total Payable Amounrt:   PKR %.2f \n",total_payable_amount);
    printf("Monthly Installment:      PKR %.2f \n",monthly_installment);
    return 0;
}