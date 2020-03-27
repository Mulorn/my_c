#include <stdio.h>

int count_digits(char *s)
{
  int i, j, f = 0;

  for (i = 0; i < 50; i++){
    for (j = 48; j < 58; j++){
        if (s[i]==j)
        {f++;}
    }
  }

return f;
}

int main()
{
  char s[50];
  printf( "Vvedite text " );
  fgets( s, 50, stdin );

  printf("Koli4estvo cifr %d", count_digits(s));

return 0;
}