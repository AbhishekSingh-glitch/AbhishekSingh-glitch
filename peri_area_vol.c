#include<stdio.h>
#define pi 3.14
int main ()

    // circle
    {
        float r;
        printf("enter radius\n")
        scanf("%f",&r);
        printf("area %.2f\ncircumfernce %.2f",pi*(r*r),2*pi*r);
    }

    // sphere 
    {
        float r;
        printf("enetr radius\n")
        scanf("%f",&r);
        printf("volume %.2f",4/3*pi*r*r*r);
    }

    // semicircle
    {
        float r;
        printf("enter radius\n")
        scanf("%f",&r);
        printf("%.2f",(pi*(r*r)/2));
    }
    // rectangle
    {
        float l[2];
        int i;
        printf("enter length and breath\n");
        for(i=0;i<2;i++)
        scanf("%f",&l[i]);
        i=0;
        printf("perimeter %.2f\narea %.2f",2*(l[i]+l[i+1]),l[i]*l[i+1]);
    }
    // cuboid
    
    {
  float l[3];
  int i;
  printf("Enter sides of culoid\n");
  for (i = 0; i < 3; i++)
    scanf("%f", &l[i]);
  i = 0;
  printf("volume %.2f\n", l[i] * l[i + 1] * l[i + 2]);
  printf("TSA %.2f\n", 2 * (l[i] * l[i + 1] + l[i + 1]* l[i + 2] +l[i]*l[i+2] ));
  printf("LSA %.2f\n", 2 * l[i + 2] * (l[i] + l[i + 1]));
}

    // triangle
    {
        float s[3];
        printf("")
    }

    // cone

    // square
    {
        float s;
        printf("Enter side of square\n");
        scanf("%.2f",&s);
        printf("area %f\nperimeter %f",s*s,4*s)
    }

    // cube
    {
        float s;
        printf("Enter side of cube\n");
        scanf("%f",&s);
        printf("volume %.2f\nTSA %.2f\nLSA %.2f",s*s*s,4*s*s,6*s*s);
    }

    // cylinder
    
    
