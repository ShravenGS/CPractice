#include<stdio.h>
  void update(int* ptr){
      *ptr=*ptr+10;
  }
int main(){
    int x=25;
    update(&x);
    printf("%d",x);
}
    
