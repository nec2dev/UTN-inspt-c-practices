#include <stdio.h>
int main() {
   int num, u,d,c,newu,newd,newc,ordernum;
    num=327;
    u=num%10;
    d=_TRUNCATE(num/10)%10;
    c=_TRUNCATE(num/100);
    printf("%f  %f  %f", u,d,c);
   return 0;
};