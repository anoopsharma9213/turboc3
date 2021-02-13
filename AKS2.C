#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <process.h>

void main(void)
{
   char *str;
   clrscr();

   /* allocate memory for string */
   if ((str = (char *) malloc(10)) == NULL)
   {
      printf("Not enough memory to allocate buffer\n");
      exit(1);  /* terminate program if out of memory */
   }
   printf("%d",malloc(10));
   /* copy "Hello" into string */
   strcpy(str, "Hello");

   /* display string */
   printf("String is %s\n", str);

   /* free memory */
   free(str);

   getch();
}