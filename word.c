#include<stdio.h>
char *a(){
  char b[100];
  gets(b);
  char *c=b;
  return c;
}
int main(){
    puts(a());
    return 0;
}