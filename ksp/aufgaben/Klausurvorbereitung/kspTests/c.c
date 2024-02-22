#include "stdio.h"
#include "stdlib.h"
int main(int argc, char *argv[]){
int x = 0x41;
char c = 0x42;
char *s = "Hallo";
char t[5] = {'W', 'e', 'l', 't', '\0'};
int *y = &x;
unsigned int u = -1;

printf("%p: ox%x %s\n",&s,s,s);
printf("%p: ox%x %s\n",&t,t,t);
printf("%p: ox%x ox%x %d %c\n",&y,y,x,x,x);
}
