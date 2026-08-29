#include <stdio.h>
int main()
{
    float programming_fundemental_Marks = 88.0;
    int pf_credit_hours = 3;
    float calculus_Analytical_geometry_Marks = 76.5;
    int cal_credit_hours = 3;
    float applied_physics_marks = 82.0;
    int ap_credit_hours = 2;
    float tot_wei_score = (programming_fundemental_Marks *pf_credit_hours) +(calculus_Analytical_geometry_Marks *cal_credit_hours)+(applied_physics_marks *ap_credit_hours);
    int tot_crdt_hrs= (pf_credit_hours+cal_credit_hours+ap_credit_hours);
    float wei_average_percentage = tot_wei_score/tot_crdt_hrs;
    printf("================ SEMESTER ACADEMIC REPORT ================\nCourse\t\t\tCredit hours\t   Obtained Marks\n");
    printf("----------------------------------------------------------\n");
    printf("Programming Fundemental\t\t %d\t\t %.2f\n",pf_credit_hours,programming_fundemental_Marks);
    printf("Calculus\t\t\t %d\t\t %.2f\n",cal_credit_hours,calculus_Analytical_geometry_Marks);
    printf("Applied Physics\t\t\t %d\t\t %.2f\n",ap_credit_hours,applied_physics_marks);
    printf("----------------------------------------------------------\n");
    printf("Total Credits: %d\t Weighted Average: %.2f\%\n",tot_crdt_hrs,wei_average_percentage);
    printf("==========================================================\n");
    
return 0;
}