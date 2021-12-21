#include<stdio.h>

void _Time(){
  printf("\n %s --Was the moment",__TIME__);  
  
}

int main (int argc, char *argv[])
{
  
  printf("-- This is  edited on -- %s ", __DATE__);
  
  _Time();
  
  return 0;
}
