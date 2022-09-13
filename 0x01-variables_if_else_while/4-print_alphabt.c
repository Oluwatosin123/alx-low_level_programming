#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
  int ch;
  for (ch = 97; ch <= 122; ch++)
  {
    putchar(ch);
  }

  putchar(10); /*ascii code for new line*/;

  for (ch =65; ch <= 90; ch++)
  {
    putchar(ch);
  }
  
    return 0;
}