#include <stdio.h>
#include <stdlib.h>

int main() 
{
   int aaaaaaaaaaaa;
   int bbbbbbbbbbbb;
   int cccccccccccc;
   int tttttttttttt;
   printf("Enter aaaaaaaaaaaa:");
   scanf("%d", &aaaaaaaaaaaa);
   printf("Enter bbbbbbbbbbbb:");
   scanf("%d", &bbbbbbbbbbbb);
   printf("Enter cccccccccccc:");
   scanf("%d", &cccccccccccc);
   if (aaaaaaaaaaaa > bbbbbbbbbbbb) 
{ 
   goto Outofia;
} 
   else{
   tttttttttttt = aaaaaaaaaaaa;
} 
Outofib:
   if ((cccccccccccc > bbbbbbbbbbbb && cccccccccccc > aaaaaaaaaaaa)) 
{ 
   goto Outofic;
} 
   else{
   goto Outofif;
} 
Outofia:
   tttttttttttt = bbbbbbbbbbbb;
   goto Outofib;
Outofic:
   tttttttttttt = cccccccccccc;
   goto Outofif;
Outofif:
   printf("%d\n", tttttttttttt);
   if (((aaaaaaaaaaaa == bbbbbbbbbbbb && aaaaaaaaaaaa == cccccccccccc) && bbbbbbbbbbbb == cccccccccccc)) 
{ 
   printf("%d\n", 1);
} 
   else{
   printf("%d\n", 0);
} 
   if (((aaaaaaaaaaaa < 0 || bbbbbbbbbbbb < 0) || cccccccccccc < 0)) 
{ 
   printf("%d\n", (0 - 1));
} 
   else{
   printf("%d\n", 0);
} 
   if (!(aaaaaaaaaaaa < (bbbbbbbbbbbb + cccccccccccc))) 
{ 
   printf("%d\n", 10);
} 
   else{
   printf("%d\n", 0);
} 
   system("pause");
    return 0;
}
