/*
* payroll.c
*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
if (argc==5)
  {
  char first_name = argv[1];
  char last_name = argv[2];
  int hours_worked = argv[3];
  double pay = argv[4];
  
   double total_pay = (hours_worked * pay);
  
  printf("last name: %s first name: %s total pay: %.2f", last_name, first_name, total_pay);
  }
else
  {
  printf("Only use 3 arguments");
  }
  return 0;
}
