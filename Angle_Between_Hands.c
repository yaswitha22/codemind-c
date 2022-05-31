#include <stdio.h>
#include <math.h>
    
  float calcAngle(float ha, float ma) 
    { 
        if (ha == 12) 
            ha = 0; 
        if (ma == 60)  
            ma = 0; 
        float hour_angle = (float)(0.5 * (ha*60 + ma)); 
        float minute_angle = (float)(6*ma);   

        float angle = abs(hour_angle - minute_angle); 
        float ang = 360-angle;     
        return (ang > angle) ? angle : ang;
    }     
  
  int main(void)

    {
       int ha,ma;
       scanf("%d:%d",&ha,&ma);
	   {
		  printf("%.1f",calcAngle(ha, ma)); 	  
	   }
    }