#include<stdio.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
// function to calculate current age

void age(int p_d, int p_m, int p_y, int b_d, int b_m, int b_y) {
   int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
   if (b_d > p_d) {
      p_d = p_d + month[ b_m - 1];
      p_m = p_m - 1;
   }
   if (b_m > p_m) {
      p_y = p_y - 1;
      p_m = p_m + 12;
   }
   int f_d = p_d - b_d;
   int f_m = p_m - b_m;
   int f_y = p_y - b_y;
   printf("Present Age Years: %d Months: %d Days: %d", f_y, f_m, f_d);
}

int main() {

   int b_d,b_m,b_y,p_d,p_m,p_y;
   printf(" Enter Birth Date: ");
   scanf("%d-%d-%d",&b_d,&b_m,&b_y);
   printf(" Enter Present Date:");
   scanf("%d-%d-%d",&p_d,&p_m,&p_y);

   age(p_d, p_m, p_y, b_d, b_m, b_y);
   return 0;
}