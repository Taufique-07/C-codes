#include<stdio.h>

#define FUEL_CONSUMPTION_12kmh

int main()
{
  int time,speed;
  float spent_fuel;

  scanf("%d %d",&time,&speed);
  spent_fuel=(double)(speed*time)/12;
  printf("%.3f",spent_fuel);

  return 0;
}
