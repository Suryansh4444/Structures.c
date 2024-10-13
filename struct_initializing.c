#include <stdio.h>
struct employee
{
 int code;
 float salary;
 char name[10];   
};

int main(){

  struct employee facebook[100];

  facebook[0].code = 100;
  facebook[1].code = 77;

    struct employee suryansh = {100, 71.22, "suryansh"};
    printf("%d %f %s", suryansh.code,suryansh.salary,suryansh.name); 
  
  return 0;
}