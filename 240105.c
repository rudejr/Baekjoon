#include <stdio.h>

int main() {
    
   int x, y;
   
   do {
       scanf("%d", &x);
       scanf("%d", &y);
   } while(!((x >= -1000 && x <= 1000 && x != 0) && (y >= -1000 && y <= 1000 && y != 0)));
   
   if(x > 0 && y > 0) printf("1");
   else if(x < 0 && y > 0) printf("2");
   else if(x < 0 && y < 0) printf("3");
   else printf("4");
   
   return 0;
}