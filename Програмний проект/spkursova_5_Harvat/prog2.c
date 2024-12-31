#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t aaaaaaaaaaaa, bbbbbbbbbbbb, cccccccccccc;
   printf("Enter aaaaaaaaaaaa:");
   scanf("%hd", &aaaaaaaaaaaa);
   printf("Enter bbbbbbbbbbbb:");
   scanf("%hd", &bbbbbbbbbbbb);
   printf("Enter cccccccccccc:");
   scanf("%hd", &cccccccccccc);
   if ((aaaaaaaaaaaa > bbbbbbbbbbbb))
   {
   if ((aaaaaaaaaaaa > cccccccccccc))
   {
   goto Abigger;
   }
   else
   {
   printf("%d\n", cccccccccccc);
   goto Outofif;
Abigger:
   printf("%d\n", aaaaaaaaaaaa);
   goto Outofif;
   }
   }
   if ((bbbbbbbbbbbb < cccccccccccc))
   {
   printf("%d\n", cccccccccccc);
   }
   else
   {
   printf("%d\n", bbbbbbbbbbbb);
   }
Outofif:
   if (((aaaaaaaaaaaa == bbbbbbbbbbbb) && (aaaaaaaaaaaa == cccccccccccc) && (bbbbbbbbbbbb == cccccccccccc)))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((aaaaaaaaaaaa < 0) || (bbbbbbbbbbbb < 0) || (cccccccccccc < 0)))
   {
   printf("%d\n", -1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if ((!(aaaaaaaaaaaa < (bbbbbbbbbbbb + cccccccccccc))))
   {
   printf("%d\n", (10));
   }
   else
   {
   printf("%d\n", (0));
   }
   system("pause");
    return 0;
}
