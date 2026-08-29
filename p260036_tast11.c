#include <stdio.h>
int main()
{
    int tea_quantity = 3;
    float tea_unit_price = 60.00;
    int samosa_quantity = 4;
    float samosa_unit_price = 40.50;
    int chicken_roll_quantity = 2;
    float chicken_roll_unit_price = 120.00;
    float subtotal=tea_quantity*tea_unit_price +samosa_quantity*samosa_unit_price +chicken_roll_quantity*chicken_roll_unit_price;
    float GST=0.16*subtotal;
    float final_payable_amount = subtotal+GST;
    printf("==================== FAST CAFETERIA RECEIPT ====================\n");
    printf("Item\t\tQty\tUnit Price (PKR)\tSubtotal (PKR)\n");
    printf("-----------------------------------------------------------------\n");
    printf("Tea\t\t%d\t%.2f\t\t \t%.2f\n",tea_quantity,tea_unit_price,tea_quantity*tea_unit_price);
    printf("Samosa\t\t%d\t%.2f\t\t \t%.2f\n",samosa_quantity,samosa_unit_price,samosa_quantity*samosa_unit_price);
    printf("Chicken Roll\t%d \t%.2f\t\t\t%.2f\n",chicken_roll_quantity,chicken_roll_unit_price,chicken_roll_quantity*chicken_roll_unit_price);
    printf("-----------------------------------------------------------------\n");
    printf("Subtotal:\t\t\t\t\tPKR %.2f\n",subtotal);
    printf("GST (16%):\t\t\t\t\tPKR %.2f\n",GST);
    printf("-----------------------------------------------------------------\n");
    printf("Grand Total:\t\t\t\t\tPKR %.2f\n",final_payable_amount);
    printf("================== THANK YOU FOR YOUR VISIT =====================\n");
    
}