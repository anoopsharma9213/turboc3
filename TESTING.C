/*#include <stdlib.h>
#include <stdio.h>

int main(void)
{
   int i;

   printf("Ten random numbers from 0 to 99\n\n");
//   for(i=0; i<10; i++)
      printf("%d\n", rand() % 6);
   getch();
   return 0;
} */

/*#include <stdlib.h>
#include <stdio.h>
#include <time.h>

// prints a random number in the range 0 to 99
int main(void)
{  int i;
  // clrscr();
   randomize();
//   for(i=0;i<10;i++)
   printf("Random number in the 0-99 range: %d\n", random (6)+1);
   getch();
   return 0;
} */

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
   int i;
   time_t t;

   srand((unsigned) time(&t));
   printf("Ten random numbers from 0 to 99\n\n");
  // for(i=0; i<10; i++)
       printf("%d\n", rand() % 6+1);
       getch();
   return 0;
}