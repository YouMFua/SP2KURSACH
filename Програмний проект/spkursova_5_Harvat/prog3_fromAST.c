#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int aaaaaaaaaaaa;
   int aaaaaaaaaaa2;
   int bbbbbbbbbbbb;
   int xxxxxxxxxxxx;
   int ccccccccccc1;
   int ccccccccccc2;
   printf("Enter aaaaaaaaaaaa:");
   scanf("%d", &aaaaaaaaaaaa);
   printf("Enter bbbbbbbbbbbb:");
   scanf("%d", &bbbbbbbbbbbb);
   for (int aaaaaaaaaaa2 = aaaaaaaaaaaa; aaaaaaaaaaa2 <= bbbbbbbbbbbb; aaaaaaaaaaa2++){
   printf("%d\n", (aaaaaaaaaaa2 * aaaaaaaaaaa2));
}
   for (int aaaaaaaaaaa2 = bbbbbbbbbbbb; aaaaaaaaaaa2 >= aaaaaaaaaaaa; aaaaaaaaaaa2--){
   printf("%d\n", (aaaaaaaaaaa2 * aaaaaaaaaaa2));
}
   xxxxxxxxxxxx = 0;
   ccccccccccc1 = 0;
   while (ccccccccccc1 < aaaaaaaaaaaa)
   {
   ccccccccccc2 = 0;
   while (ccccccccccc2 < bbbbbbbbbbbb)
   {
   xxxxxxxxxxxx = (xxxxxxxxxxxx + 1);
   ccccccccccc2 = (ccccccccccc2 + 1);
   }
   ccccccccccc1 = (ccccccccccc1 + 1);
   }
   printf("%d\n", xxxxxxxxxxxx);
   xxxxxxxxxxxx = 0;
   ccccccccccc1 = 1;
   do{
   
   
   ccccccccccc2 = 1;
   do{
   
   xxxxxxxxxxxx = (xxxxxxxxxxxx + 1);
   ccccccccccc2 = (ccccccccccc2 + 1);
   } while (!(ccccccccccc2 > bbbbbbbbbbbb));
   ccccccccccc1 = (ccccccccccc1 + 1);
   } while (!(ccccccccccc1 > aaaaaaaaaaaa));
   printf("%d\n", xxxxxxxxxxxx);
   system("pause");
    return 0;
}
