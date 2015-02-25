#include <stdio.h>

void print_converted(int pounds){
  /* Convert U.S. Weight to Imperial and International
   Units. Print the results */

   int stones = pounds / 14;
   int uklbs = pounds % 14;
   float kilos_per_pound = 0.45359;
   float kilos = pounds * kilos_per_pound;

   printf("   %3d          %2d  %2d        %6.2f\n",
        pounds, stones, uklbs, kilos);
}

main(){
  int us_pounds;

  printf("US lbs      UK st. lbs       INT Kg\n");

  for(us_pounds = 10; us_pounds < 250; us_pounds +=10){
    print_converted(us_pounds);
  }
}
