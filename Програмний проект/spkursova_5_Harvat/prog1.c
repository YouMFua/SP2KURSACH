#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   short   aaaaaaaaaaaa, bbbbbbbbbbbb, xxxxxxxxxxxx, yyyyyyyyyyyy;
   printf("Enter aaaaaaaaaaaa:");
   scanf("%hd", &aaaaaaaaaaaa);
   printf("Enter bbbbbbbbbbbb:");
   scanf("%hd", &bbbbbbbbbbbb);
   printf("%d\n", aaaaaaaaaaaa + bbbbbbbbbbbb);
   printf("%d\n", aaaaaaaaaaaa - bbbbbbbbbbbb);
   printf("%d\n", aaaaaaaaaaaa * bbbbbbbbbbbb);
   printf("%d\n", aaaaaaaaaaaa / bbbbbbbbbbbb);
   printf("%d\n", aaaaaaaaaaaa % bbbbbbbbbbbb);
   xxxxxxxxxxxx = (aaaaaaaaaaaa - bbbbbbbbbbbb) * 10 + (aaaaaaaaaaaa + bbbbbbbbbbbb) / 10;
   yyyyyyyyyyyy = xxxxxxxxxxxx + xxxxxxxxxxxx % 10;
   printf("%d\n", xxxxxxxxxxxx);
   printf("%d\n", yyyyyyyyyyyy);
   system("pause");
    return 0;
}
