#include <stdio.h>
int main()
{
    float initial_velocity = 12.5;
    float acceleration = 3.2;
    float time_elapsed = 6.0;
    float final_velocity = initial_velocity+(acceleration*time_elapsed);
    float total_distance_travelled = (initial_velocity*time_elapsed)+(0.5*acceleration*time_elapsed*time_elapsed);
    printf("=============KINEMATICS MOTION REPORT=============\n");
    printf("Initial Velocity (vi):   %.2f m/s\n", initial_velocity);
    printf("Acceleration (a):         %.2f m/s^2\n",acceleration);
    printf("Time Elapsed (t):         %.2f s\n",time_elapsed);
    printf("---------------------------------------------------\n");
    printf("Calculated Final Velocity (vf):  %.2f m/s\n",final_velocity);
    printf("Calculated Distance (s):       %.2f m\n", total_distance_travelled);
    printf("===================================================\n");
    return 0;
    
}