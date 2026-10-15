#include <stdio.h>
int main() 
{
  int n;
  printf("nhap mot so nguyen: ")
  scanf("%d", &n);
  if(n%2==0) {
    printf("%d la so chan\n");
  }esle{
    printf("%d la so le\n");
  }
      
  return 0;
}