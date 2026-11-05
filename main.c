#include <stdio.h>
int main() {
  float dtb,drl;
  scanf("%f%f", &dtb, &drl);
  if ( dtb>=9.0 && drl>=90 ){
    printf("XUAT_SAC");
  }else {
    printf("KHONG_DAT");
  }
  printf("HOC_BONG_XUAT_SAC");
  if ( 8.0<= dtb <9.0 && 80<= drl <90){
    printf("GIOI");
  }else {
    printf("KHONG_DAT");
  }
  printf("HOC_BONG_GIOI");
  if (7.0<= dtb < 8.0 && 70<= drl <80){
    printf("KHA");
  }else {
    printf("KHONG_DAT");
  }
  printf("HOC_BONG_KHA");  
  if ( dtb <7.0 && drl <70){
    printf("KHONG_DAT");
  }
  return 0;
}