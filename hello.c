#include <stdio.h>
int main() {
   int num, u,d,c,newu,newd,newc,ordernum;
    num=327;
    u=num%10;
    d=(num/10)%10;
    c=(num/100);
    printf("%d  %d  %d", c,d,u);
   return 0;
   if(c<u&&c<d){
      newc=c;
      if(d<u&&d<c){
         newc=d;
         if(u<d&&u<c){
            newc=u;
         }
      }

   }
};