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
  
  return 0;
}