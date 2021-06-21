#include <stdio.h>
/*description of main function*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if(ch != 'q' && ch != 'e')
{
  putchar(ch);
}
}
putchar('\n');
  return(0);
}
