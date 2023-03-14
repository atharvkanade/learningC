#include <stdio.h>

int main() {
  int count = 0;
  int sum = 0;

  while(count<5){
    printf("Enter an integer: \n");
    int number;
    scanf("%d",&number);
    sum = sum+number;
    count++;
  }

  double avg = (double)sum/(double)count;
  printf("The average is : %lf",avg);
  
  return 0;
}