#include <stdio.h>
int main() {
  float t;
  printf("nhap nhiet do vao: ");
  scanf("%f" , &t);
  if(t<0){
    printf("nhiet do %.2f do C: rat lanh\n" , t);
  }else if(t>=0 && t<18){
    printf("nhiet do %.2f do C: troi lanh\n" , t);
  }else if("t>=18 && t<26"){
    printf("nhiet do %.2f do C: thoi tiet mat me\n" , t);
  }else if(t>=26 && t<35){
    printf("nhiet do %.2f do C: troi am\n" , t);
  }else{
    printf("nhiet do %.2f do C: troi rat nong\n" , t);
  }
  return 0;
}