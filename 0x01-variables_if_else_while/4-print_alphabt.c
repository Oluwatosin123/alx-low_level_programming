#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
  int ch;
  for (ch = 'a'; ch <= 'z'; ch++)
  {   
      if(ch !='q' && ch != 'e')
      {
        putchar(ch);
      }
  }
    putchar(10); /*ascii code for new line*/;
    return 0;
}