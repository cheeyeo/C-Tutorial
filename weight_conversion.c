#include <stdio.h>
#define KILOS_PER_POUND .45359

main(){
  int pounds;

  printf(" US lbs      UK st. lbs       INT Kg\n");

  for(pounds=10; pounds < 250; pounds+=10){
    int stones = pounds / 14;
    int uklbs = pounds % 14;
    float kilos = pounds * KILOS_PER_POUND;
    printf("   %d           %d   %d        %f\n",
                                   pounds, stones, uklbs, kilos);
  }
}
