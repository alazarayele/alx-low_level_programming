#include <stdio.h>
/*description of main function*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return(0);
}
