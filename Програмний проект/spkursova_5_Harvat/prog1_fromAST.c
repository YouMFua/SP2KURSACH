#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int aaaaaaaaaaaa;
   int bbbbbbbbbbbb;
   int xxxxxxxxxxxx;
   int yyyyyyyyyyyy;
   printf("Enter aaaaaaaaaaaa:");
   scanf("%d", &aaaaaaaaaaaa);
   printf("Enter bbbbbbbbbbbb:");
   scanf("%d", &bbbbbbbbbbbb);
   printf("%d\n", (aaaaaaaaaaaa + bbbbbbbbbbbb));
   printf("%d\n", (aaaaaaaaaaaa - bbbbbbbbbbbb));
   printf("%d\n", (aaaaaaaaaaaa * bbbbbbbbbbbb));
   printf("%d\n", (aaaaaaaaaaaa / bbbbbbbbbbbb));
   printf("%d\n", (aaaaaaaaaaaa % bbbbbbbbbbbb));
   xxxxxxxxxxxx = (((aaaaaaaaaaaa - bbbbbbbbbbbb) * 10) + ((aaaaaaaaaaaa + bbbbbbbbbbbb) / 10));
   yyyyyyyyyyyy = (xxxxxxxxxxxx + (xxxxxxxxxxxx % 10));
   printf("%d\n", xxxxxxxxxxxx);
   printf("%d\n", yyyyyyyyyyyy);
   system("pause");
    return 0;
}
