#include <stdio.h>

int main() {
  char c = 'C';
  short s = 100;
  int i = 200;
  long l = 300L;
  long long ll = 321523LL;
  printf("Size of Char = %d byte\n",(int)sizeof(c));
  printf("Size of Short = %d byte\n",(int)sizeof(s));
  printf("Size of Int = %d byte \n",(int)sizeof(i));
  printf("Size of Long = %d byte\n",(int)sizeof(l));
  printf("Size of Long Long = %d byte \n",(int)sizeof(ll));


  return 0;
}