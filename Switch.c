#include <stdio.h>

int main()
{
  char ch;
  printf ("Enter a alphabet : ");
  scanf (" %c", &ch);
switch(ch){
  case 'a' :
  case 'e' :
  case 'i' :
  case 'o' :
  case 'u' :
      printf( "%c is a vowal",ch);
      break;
default:
      printf("%c is a consonent",ch);
}
    return 0;
}
