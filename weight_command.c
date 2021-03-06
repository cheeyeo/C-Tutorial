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

main(int argc, char *argv[]){
  int pounds;

   if(argc != 2)
  {
    printf("Usage: convert weight_in_pounds\n");
    exit(1);
  }

  sscanf(argv[1], "%d", &pounds); /* Convert String to int */

  printf(" US lbs      UK st. lbs       INT Kg\n");

  print_converted(pounds);
}

