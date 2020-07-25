#include "stdio.h"
#include "stdlib"
#include <math.h>

int app_add(int a, int b)
{
	printf("hello world\n");
	return (a+b);
}
/* add mark for push test */
int main(int argc, char *argv[])
{
  printf("hello world!\n");
  int a = 0;
  int b = 0;
  int add_result = 0;
  a = atoi(argv[1]);
  b = atoi(argv[2]);
  add_resullt = app_add(a+b);  
  printf("a + b = :%d\n", add_result);
  return 0;
}

