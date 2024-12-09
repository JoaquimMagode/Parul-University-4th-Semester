// Write a C program to generate the pyramid the center of the screen
#include <stdio.h>

int main() {
    // Attributes
    int i,j, rows;
    int center = 40;

  
  // Getting the no of rows from the User
  printf("Enter the no of rows of the pyramid\n: ");
  scanf("%d",&rows);


  //Logic to print Pyramid
  for(i=1;i<=rows;i++){
    for(j=1;j<=center-i;j++){
      printf(" ");
    }
    for(int k=1;k<=2*i-1;k++){
    printf("*");
    }
    printf("\n");
  }
  return 0;
}
